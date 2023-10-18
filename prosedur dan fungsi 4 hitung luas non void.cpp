#include<iostream>
using namespace std;

int luas(int p,int l)
{
	return(p*l);
}

main()
{
	int pj,lb;
	
	cout<<"=====ini contoh non void=====\n";
	cout<<"\nPanjang = ";
	cin>>pj;
	cout<<"Lebar = ";
	cin>>lb;
	cout<<"============";
	luas(pj,lb);
	cout<<"\nLuasnya = "<<luas(pj,lb);
	
	return 0;
}