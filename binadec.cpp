#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include "common.h"
#include "hexodec.h"

int Binary[255];

using namespace std;

int FromBinaryToDecimale(string str, int *NumberDec){ //из 2 в 10
		char ch[1];
		for (int i=0; i<str.size(); i++){
			ch[0]=str[i];
			Binary[i]=atoi(ch);
			if(Binary[i]>1){
		    cout<<"¬ведено не двоичное число"<<endl;
		    return -1;
			}
		}
		*NumberDec=0;
        for(int i=0; i<str.size(); i++){
        	*NumberDec=*NumberDec+Binary[i]*pow(2, str.size()-i-1);
		}
		return 0;
}


void FromDecimaleToBinary(int NumberDec, string *str){ 
		*str="";
	    int i=0;
	    char ch[1];
	    while(NumberDec>=1){
	    	if(NumberDec%2==0)
	    		Binary[i]=0;
	   		else
	    		Binary[i]=1;
	    	NumberDec=NumberDec/2;
	    	//itoa(Binary[i], ch, 2);
	    	i++;
		}	
    	for(int f=i-1; f>=0; f--){
    		itoa(Binary[f], ch, 2);
    		*str=*str+ch[0];
		}
	}  

void FromBinToHex(string *s){
	int NumberDec=0;
	FromBinaryToDecimale(*s, &NumberDec);
	FromDecimaleToHex(NumberDec, s);

		
}


