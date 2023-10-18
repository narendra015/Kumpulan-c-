#include <iostream>
using namespace std;

int main ()
{
	char karakter[5];
	int i;
	
	karakter[0]='A';
	karakter[1]='B';
	karakter[2]='C';
	karakter[3]='D';
	karakter[4]='E';
	
	for(i=0;i<5;i++)
	cout<<karakter[i]<<endl;
	
	return 0;
}