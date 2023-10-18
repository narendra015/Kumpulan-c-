#include<iostream>
using namespace std;

int main()
{
	int angka;
	cout<<"Menu";
	cout<<"\n1.Nasi Telur";
	cout<<"\n2.Nasi Goreg";
	cout<<"\n Masukkan Pilihan Anda : ";
	cin>>angka;
	if (angka==1)
	cout<<"Anda memesan Nasi Telur";
	else
	cout<<"\n Anda memesan Nasi Goreng";
	return 0;
}