#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include "binadec.h"
using namespace std;

int Hex[255];

void FromHexToDecimale(string str, int *NumberDec){
			char ch[2];
		for (int i=0; i<str.size(); i++){
			ch[0]=str[i];
			ch[1]='\0';
			switch(ch[0]){
				case 'A':{
					ch[0]='1';
					ch[1]='0';
					break;
				}
				case 'B':{
					ch[0]='1';
					ch[1]='1';					
					break;
				}
				case 'C':{
					ch[0]='1';
					ch[1]='2';					
					break;
				}
				case 'D':{
					ch[0]='1';
					ch[1]='3';					
					break;
				}
				case 'E':{
					ch[0]='1';
					ch[1]='4';					
					break;
				}
				case 'F':{
					ch[0]='1';
					ch[1]='5';					
					break;
				}
				
			}
			Hex[i]=atoi(ch);
		}
		*NumberDec=0;
        for(int i=0; i<str.size(); i++){
        	*NumberDec=*NumberDec+Hex[i]*pow(16, str.size()-i-1);
		}
		//cout<<*NumberDec<<endl;
}
void FromDecimaleToHex(int NumberDec, string *str){
		*str="";
	    int i=0;
	    char ch[1];
	    while(NumberDec>=1){
	    	Hex[i]=NumberDec%16;
	    	NumberDec=NumberDec/16;
	    	i++;
		}	
    	for(int f=i-1; f>=0; f--){

    		switch(Hex[f]){
				case 10:{
					ch[0]='A';
					break;
				}
				case 11:{
					ch[0]='B';					
					break;
				}
				case 12:{
					ch[0]='C';				
					break;
				}
				case 13:{
					ch[0]='D';					
					break;
				}
				case 14:{
					ch[0]='E';				
					break;
				}
				case 15:{
					ch[0]='F';					
					break;
				}
				default:
					itoa(Hex[f], ch, 10);
			}
    		*str=*str+ch[0];
		}
	}  

void FromHexToBin(string *s){
	int NumberDec=0;
	FromHexToDecimale(*s, &NumberDec);
	FromDecimaleToBinary(NumberDec, s);

}

