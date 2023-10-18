#include<iostream>
using namespace std;

int main()
{
	int sisi1,sisi2,sisi3;
	cout<<"Masukkan Sisi 1 : ";
	cin>>sisi1;
	cout<<"Masukkan Sisi 2 : ";
	cin>>sisi2;
	cout<<"Masukkan Sisi 3 : ";
	cin>>sisi3;
	
	if(sisi1==sisi2)
	{
		if(sisi2==sisi3)
		{
			cout<<"Segitiga Sama Sisi";
		
		}
	}
	else if(sisi1==sisi3)
	{
		cout<<"Segitiga Sama Kaki";
	}
	else if(sisi1==sisi2)
	{
		cout<<"Segitiga Sama Kaki";
	}
	else if(sisi2==sisi3)
	{
		cout<<"Segitiga Sama Sisi";
	}
	else
	{
		cout<<"Semua Sisi Tidak Sama";
	}	
	return 0;
}