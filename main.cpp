#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>



//pow-возведение в степень


using namespace std;

	int BaseFrom;//Из какой системы исчесления
	int BaseTo;//В какую систему исчесления
    int NumberFrom[100];
    int NumberDec;
void FromBinaryToDecimale(int NumberFrom[],int counter){ //из 2 в 10
		NumberDec=0;
        for(int i=0; i<counter; i++){
        	NumberDec=NumberDec+NumberFrom[i]*pow(BaseFrom,counter-i-1);

		}
		cout<<NumberDec<<endl;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL,"Russian");
	string str;
	char ch[1];
	int counter;
	cout<<"Из какой системы исчесления: ";
	cin>>BaseFrom;
	cout<<"В какую систему исчесления: ";
	cin>>BaseTo;
	cout<<"Введите число для перевода: ";
	cin>>str;
	counter=0;
	for(int i=0; i<str.size(); i++){
		ch[0]=str[i];
		NumberFrom[i]=atoi(ch);
		counter++;
		cout<<counter<<endl;
		//cout<<NumberFrom[i];
	}		
	
    FromBinaryToDecimale(NumberFrom,counter);
    cout<<"Что получилось: "<<NumberDec;
    
	return 2007;
}

/*ДЗ

ДЗ*/




