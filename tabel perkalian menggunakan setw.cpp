#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<"Tabel Perkalian: "<<endl;
	for(int a=1;a<=10;a++)
	{
		cout<<setw(5);
		for(int b=1;b<=10;b++)
		cout<<setw(5)<<a*b;
		cout<<endl;
	}
	return 0;
}