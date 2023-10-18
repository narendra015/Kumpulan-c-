#include <iostream>
using namespace std;

int main()
{
	int jml_barang;
	cout<<"Masukkan jumlah barang = ";
	cin>>jml_barang;
	
	int harga[jml_barang];
	int total;
	
	for(int a=0;a<jml_barang;a++)
	{
		cout<<"harga barang ke-"<<a<<"= ";
		cin>>harga[a];
	}
	cout<<"---------------------------"<<endl;
	
	for(int b=0;b<jml_barang;b++)
	{
		cout<<"Barang ke-"<<b<<"=Rp."<<harga[b]<<endl;
		total += harga[b];//operator penugasan
	}
	cout<<"------------------------"<<endl;
	cout<<"Jumlah barang = "<<jml_barang<<endl;
	cout<<"Total Harga = Rp."<<total<<endl;
	return 0;
}
