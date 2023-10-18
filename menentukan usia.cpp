#include <iostream>
using namespace std;

int main ()
{
	string nama1;
	string nama2;
	string nama3;
	int umur,umur1,umur2,umur3;
	
	
	cout<<"Masukan Nama   : ";
	cin>>nama1;
	cout<<"Masukan umur   : ";
	cin>>umur1;
	cout<<"Masukan Nama   : ";
	cin>>nama2;
	cout<<"Masukan umur   : ";
	cin>>umur2;
	cout<<"Masukan Nama   : ";
	cin>>nama3;
	cout<<"Masukan umur   : ";
	cin>>umur3;
	
	if(umur1>umur2&&umur1>umur3)
	cout<< nama1 <<" lebih tua dibandingkan "<< nama2 <<" dan "<< nama3;
	
	else if(umur2>umur1&&umur2>umur3)
	cout<<nama2<<" lebih tua dibandingkan "<< nama1 <<" dan "<< nama3;
	
	else
	cout<<nama3 <<" lebih tua dibandingkan "<< nama1 <<" dan "<< nama2;
	
  return 0;
}
 