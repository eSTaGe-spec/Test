#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include "binadec.h"
#include "hexodec.h"
#include "common.h"

//pow-���������� � �������(exponentiation)

using namespace std;

	int BaseFrom;//�� ����� ������� ����������(What number system)
	int BaseTo;//� ����� ������� ����������(Which number system)
    int NumberDec;
    
   


int main(int argc, char** argv) {
	char n='y';
	setlocale(LC_ALL,"Russian");
	while (n=='y'){
	cout<<"�� ����� ������� ����������(What number system): ";
	cin>>BaseFrom;
	cout<<"� ����� ������� ����������(Which number system): ";
	cin>>BaseTo;
	string s;	
	cout<<"������� ����� ��� ��������(Enter the number to transfer): ";
	cin>>s;	
	switch(BaseFrom){
		
		case 2:{
			switch(BaseTo){
				case 10: {
					if (FromBinaryToDecimale(s, &NumberDec)==-1)
						break;
					cout<<"�����: "<<NumberDec<<endl;					
					break;
				}
				case 16: {
					FromBinToHex(&s);
					cout<<"�����: "<<s<<endl;
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
			cout<<"�����: "<<str<<endl;
			break;
		}
		case 16:{
			switch(BaseTo){
				case 10: {
					FromHexToDecimale(s, &NumberDec);
					cout<<"�����: "<<NumberDec<<endl;					
					break;
				}
				case 2: {
					FromHexToBin(&s);
					cout<<"�����: "<<s<<endl;
					break;
				}
			}	
			break;						
		}
		default:{
			cout<<"�� ����� �� ���������� �����"<<endl;
		}

	}
	cout<<"������ ����������?(y/n)"<<endl;
	cin>>n;
	}
	return 2007;

}
//�� ������� �����


