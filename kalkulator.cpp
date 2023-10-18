#include<iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;
	
	cout<<"Selamat datang di Kalkulator sederhana"<<endl;
	cout<<"silahkan isi data berikut"<<endl;
	// Memasukkan input dari user
	
	cout<<"Masukkan bilangan pertama: ";
	cin>>a;       
	cout<<"pilih operator +,-,*,/: ";
	cin>>aritmatika;
	cout<<"Msukkan bilangan kedua; ";
	cin>>b;
	
	cout<<"---------------------------------------------------"<<endl;
	cout<<"\nHasil perhitungan: ";
	
	
switch(aritmatika)
{
	case'+' :hasil = a + b;
			cout<<a<<aritmatika<<b<<"=" <<hasil<<endl;
			break;
			
	case'-' :hasil=a-b;
			cout<<a<<aritmatika<<b<<"=" <<hasil<<endl;
			break;
			
	case'*' :hasil=a*b;
			cout<<a<<aritmatika<<b<<"=" <<hasil<<endl;
			break;
			
	case'/' :hasil=a/b;
			cout<<a<<aritmatika<<b<<"=" <<hasil<<endl;
			break;
			
	default :
			cout<<"Salah Masukan Operator"<<endl;
}
	return 0;
}