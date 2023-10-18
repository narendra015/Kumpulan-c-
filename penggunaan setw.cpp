#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
for (int i=1;i<=6;i++)
	cout<<"     "<<setw(i)<<i<<endl;
	
for (int i=11;i>=7;i--)
	{
	for (int j=7;j<=11;j++)	
		{
		cout<<setw(i--)<<j<<endl;	
		}
		
	}	
	cout<<endl;
	return 0;
}