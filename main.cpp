#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>



//pow-���������� � �������


using namespace std;

	int BaseFrom;//�� ����� ������� ����������
	int BaseTo;//� ����� ������� ����������
    int NumberFrom[100];
    int NumberDec;
void FromBinaryToDecimale(int NumberFrom[],int counter){ //�� 2 � 10
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
	cout<<"�� ����� ������� ����������: ";
	cin>>BaseFrom;
	cout<<"� ����� ������� ����������: ";
	cin>>BaseTo;
	cout<<"������� ����� ��� ��������: ";
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
    cout<<"��� ����������: "<<NumberDec;
    
	return 2007;
}

/*��

��*/




