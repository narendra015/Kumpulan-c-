#include <iostream>
using namespace std;

int main()
{
	int p,l,luas ;
	string ulang;
	do
	{
		cout<<"================================"<<endl;
		cout<<"masukan panjang\t: ";
		cin>>p;
		cout<<"masukan lebar\t: ";
		cin>>l;
		luas=p*l;
		cout<<"Luas adalah "<<luas<<endl;
		cout<<"ingin menghitung lagi(y/n): ";
		cin>>ulang;
	}
	while(ulang=="y");
	cout<<endl;
	cout<<"----selesai----";
	
	return 0;
}