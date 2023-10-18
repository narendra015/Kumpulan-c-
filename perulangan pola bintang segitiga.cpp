#include<iostream>
using namespace std;
int jumlah;

int main()
{
	for(int a=0;a<=3;a++)
	{
		for(int b=0;b<a;b++)
		{
			cout<<"*";
		}
		cout<<"*"<<endl;
	}
	for(int c=0;c<=3;c++)
	{
		for(int d=0;d<=c;d--)
		{
			cout<<"*";
		}
		cout<<"*"<<endl;
	}
}
