#include<iostream>
using namespace std;
int main()
{
	
	int alas,tinggi,luas;
	cout<<"Mencari Luas Segitiga"<<endl;

	cout<<"masukkan alas:";		//untuk memasukkan alas segitiga
	cin>>alas;
	cout<<"masukkan tinggi:";	//untuk memasukkan tinggi segitiga
	cin>>tinggi;
	
	luas=alas*tinggi/2;			//rumus luas segitiga
	
	cout<<"------------------------------"<<endl;
	cout<<"jadi luas segitiga adalah "<<luas; //hasil luas segitiga 
	return 0;
}
