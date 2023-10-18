#include<iostream>
using namespace std;

int main()
{
	int umur;
	string status;
	
	cout<<"Masukkan umur : ";
	cin>>umur;
	cout<<"Masukkan status(Belum Nikah/Nikah) : ";
	cin>>status;
	
	if((umur>=17)||(status=="Nikah"))
	{
		cout<<"Anda barhak mencoblos.";
	}
	else
	{
		cout<<"Anda belum berhak mencoblos.";
	}
	return 0;
}