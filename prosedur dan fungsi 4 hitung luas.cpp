#include<iostream>
using namespace std;

void luas(int p,int l)
{
	int lu;
	lu=p*l;
	cout<<"Luas = "<<lu;
}

int main()
{
	int pj,lb,hasil;
	cout<<"=========ini contoh fungsi void=========\n\n";
	cout<<"Panjang = ";
	cin>>pj;
	cout<<"Lebar = ";
	cin>>lb;
	cout<<"=================="<<endl;
	luas(pj,lb);
	return 0;
}