#include <iostream>
using namespace std;

int main()
{
	string nim,nama,prodi;
	int sks,biaya;
	float ipk;
	
	cout<<"NIM : ";
	cin>>nim;
	cout<<"Nama : ";
	cin>>nama;
	ulang:
	cout<<"Prodi [SI/KA] : ";
	cin>>prodi;
	
	if(prodi!="SI"&& prodi!="KA")
	{	cout<<"Prodi salah!\n";
		goto ulang;	}
	cout<<"Masukkan sks = ";
	cin>>sks;
	
	if(prodi=="SI")
	{biaya=sks*100000;}
	else
	{
		biaya=sks*75000;
	}
	
	cout<<"jumlah tagihan\n";
	cout<<"Biaya = "<<biaya;
	
	cout<<"\nMasukkan ipk = ";
	cin>>ipk;
	
}