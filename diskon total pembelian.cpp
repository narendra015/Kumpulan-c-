#include<iostream>
using namespace std;

int main()
{
	double total_pembelian,diskon;
	cout<<"Total Pembelian:Rp ";
	cin>>total_pembelian;
	diskon=0;
	
	if(total_pembelian>=100000)
	diskon=(0.05*total_pembelian);
	cout<<"Besar korting:Rp "<<diskon;
	return 0;
}