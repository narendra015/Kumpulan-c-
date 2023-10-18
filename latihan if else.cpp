#include <iostream>
using namespace std;

int main()
{
 	string a1,b1,c1;
	int a2,b2,c2;
	
	cout<<"masukkan nama :";
	cin>>a1;
	cout<<"masukkan umur :";
	cin>>a2;
	cout<<"masukkan nama :";
	cin>>b1;
	cout<<"masukkan umur :";
	cin>>b2;
	cout<<"masukkan nama :";
	cin>>c1;
	cout<<"masukkan umur :";
	cin>>c2;
	
	cout<<"======================================="<<endl;	
	
	if (a2>b2 && a2>c2)
	cout<<a1<<" lebih tua dari "<<b1<<" dan "<<c1;
	
	else if (b2>a2 && b2>c2)
	cout<<b1<<" lebih tua dari "<<a1<<" dan "<<c1;
	
	else 
	cout<<c1<<" lebih tua dari "<<a1<<" dan "<<b1;
	
	return 0;
}