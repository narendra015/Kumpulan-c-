#include<iostream>
using namespace std;

int main()
{
	int tugas,UTS,UAS,Keaktifan,total;
	cout<<"Masukkan Nilai Tugas : ";
	cin>>tugas;
	cout<<"Masukkan Nilai UTS: "; 
	cin>>UTS;
	cout<<"Masukkan Nilai UAS: ";
	cin>>UAS;
	cout<<"Masukkan Nilai Keaktifan: ";
	cin>>Keaktifan;
	total=0,2*tugas+0,35*UTS+0,35*UAS+0,1*Keaktifan;
	
	cout<<"------------------------------"<<endl;
	cout<<"jadi keliling persegi empat adalah "<<total; 
	return 0;
}
