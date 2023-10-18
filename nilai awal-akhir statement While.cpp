#include<iostream>
using namespace std;

int main()
{
	int awal,akhir;
	cout<<"Nilai Awal: ";
	cin>>awal;
	cout<<"Nilai Akhir: ";
	cin>>akhir;
	
	int x=awal;
	while(x<=akhir)
	{
		cout<<x<<" Belajar C++\n";
		x++;
	}
	return 0;
}