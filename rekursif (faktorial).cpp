#include <iostream>
using namespace std;

int faktorial(int n)
{
	if (n==1)
	{
		return (n);
	}
	else 
	{
		return(n*faktorial(n-1));
	}
}

int main()
{
	int x;
	cout<<"Mencari nilai faktorial\n";
	cout<<"Masukkan nilai x = ";
	cin>>x;
	cout<<"======================================\n";
	cout<<"Hasil faktorial dari "<<x<<" adalah "<<faktorial(x);
	return 0;
}