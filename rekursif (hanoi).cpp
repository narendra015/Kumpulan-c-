#include <iostream>
using namespace std;

void hanoi(int n,char A,char B,char C)
{
	if (n==1)
	cout<<"Pindahkan piring dari "<<A<<" ke "<<C<<endl;
	else 
	{
		hanoi(n-1,A,C,B);
		hanoi(1,A,B,C);
		hanoi(n-1,B,A,C);
	}
}
int main()
{
	int jumlah_piring;
	
	cout<<"Jumlah piring : ";
	cin>>jumlah_piring;
	cout<<endl;
	hanoi(jumlah_piring,'A','B','C');

	return 0;
}