#include <iostream>
using namespace std;

void rekursif(int n)
{
	if(n>0)
	{
	cout<<" mengulangi diri sendiri"<<endl;
	n--;
	rekursif(n);
	}
}

int main()
{
	rekursif(5);
}