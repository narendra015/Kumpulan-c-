#include <iostream>
using namespace std;

int main()
{
int angka=12;	

	for(int x=0;x<angka;x++)
	{
		cout<<"1";
		for(int y=1;y<angka-x;y++)
		
		{
			cout<<"0";
		}	
		cout<<endl;
	}
return 0;
}