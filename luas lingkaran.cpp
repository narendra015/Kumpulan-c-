#include <iostream>
using namespace std;
int main()
{
	float luas,phi=3.14;
	int r;
	cout<<"Mencari Luas Lingkaran"<<endl;

	cout<<"masukkan jari-jari:";		
	cin>>r;
	
	luas=phi*r*r;		
	cout<<"------------------------------"<<endl;
	cout<<"jadi luas Lingkaran adalah "<<luas;  
	return 0;
}