#include <iostream>
using namespace std;

int main()
{
	int jumlah_array;
	cout<<"Masukkan jumlah index :";
	cin>>jumlah_array;
	cout<<"============================"<<endl;
	int angka[jumlah_array];
	
	for(int x=0;x<jumlah_array;x++)
	{
	cout<<"Masukkan nilai index ke-"<<x<<" : ";
	cin>>angka [x];
	}
	cout<<"============================"<<endl;
	cout<<"Hasil Array"<<endl;
	cout<<"============================"<<endl;
	
	for (int z=0;z<jumlah_array;z++)
	{
		cout<<"index ke-"<<z<<angka[z]<<endl;
	}
	return 0;
	
}