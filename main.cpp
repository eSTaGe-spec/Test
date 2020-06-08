#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include "binadec.h"
#include "hexodec.h"
#include "common.h"

//pow-возведение в степень(exponentiation)

using namespace std;

	int BaseFrom;//Из какой системы исчесления(What number system)
	int BaseTo;//В какую систему исчесления(Which number system)
    int NumberDec;
    
   


int main(int argc, char** argv) {
	char n='y';
	setlocale(LC_ALL,"Russian");
	while (n=='y'){
	cout<<"Из какой системы исчесления(What number system): ";
	cin>>BaseFrom;
	cout<<"В какую систему исчесления(Which number system): ";
	cin>>BaseTo;
	string s;	
	cout<<"Введите число для перевода(Enter the number to transfer): ";
	cin>>s;	
	switch(BaseFrom){
		
		case 2:{
			switch(BaseTo){
				case 10: {
					if (FromBinaryToDecimale(s, &NumberDec)==-1)
						break;
					cout<<"Ответ: "<<NumberDec<<endl;					
					break;
				}
				case 16: {
					FromBinToHex(&s);
					cout<<"Ответ: "<<s<<endl;
					break;
				}
			}
			break;
		}
		case 10:{
		string str="";
			switch(BaseTo){
				case 2: {
    				FromDecimaleToBinary(FromStrToDec(s), &str);				
					break;
				}
				
				case 16: {	
					FromDecimaleToHex(FromStrToDec(s), &str);		
					break;
				}				
			}
			cout<<"Ответ: "<<str<<endl;
			break;
		}
		case 16:{
			switch(BaseTo){
				case 10: {
					FromHexToDecimale(s, &NumberDec);
					cout<<"Ответ: "<<NumberDec<<endl;					
					break;
				}
				case 2: {
					FromHexToBin(&s);
					cout<<"Ответ: "<<s<<endl;
					break;
				}
			}	
			break;						
		}
		default:{
			cout<<"Вы ввели не правильное число"<<endl;
		}

	}
	cout<<"Хотите продолжить?(y/n)"<<endl;
	cin>>n;
	}
	return 2007;

}
//ДЗ сделать выдор


