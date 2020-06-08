#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>

using namespace std;

   int FromStrToDec(string str){
    	char ch[255];
    	int Res;//Результат
		for (int i=0; i<str.size(); i++){
			ch[i]=str[i];
		}
		Res=atoi(ch);
		return Res;
	}
	
