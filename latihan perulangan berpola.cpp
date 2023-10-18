#include <iostream>
#include<iostream>
using namespace std;

int main()
{
	int angka=10;
	for(int x=0;x<=angka;x++)
	{
		for(int y=0;y<x;y++)
		{
			cout<<"*";
		}
		cout<<"*\n";
	}
	
	for(int x=0;x<=angka;x++)//segitiga terbalik
	{
		for(int y=0;y<angka-x;y++)
		{
			cout<<"*";
		}
		cout<<"*\n";
	}
	return 0;}