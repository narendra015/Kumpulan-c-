#include<iostream>
using namespace std;
int main()
{
	
	int panjang,lebar,keliling;
	cout<<"Mencari Keliling Persegi Panjang"<<endl;

	cout<<"masukkan panjang :";		//untuk memasukkan panjang persegi panjang
	cin>>panjang;
	cout<<"masukkan lebar:";	//untuk memasukkan lebar persegi panjang
	cin>>lebar;
	
	keliling=2*(panjang+lebar);			//rumus keliling persegi panjang
	
	cout<<"------------------------------"<<endl;
	cout<<"jadi keliling persegi panjang adalah "<<keliling; //hasil keliling persegi panjang 
	return 0;
}
