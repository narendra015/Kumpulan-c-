#include <iostream>
using namespace std;

long fibo (long n)
{
	if ((n==1)||(n==2))
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}
int main ()
{
	int x;
	cout<<"Mencari nilai fibonacci\n";
	cout<<"Masukkan nilai x= ";
	cin>>x;
		cout<<"================================\n";
	cout<<"Hasil fibonacci dari "<<x<<" adalah "<<fibo(x);
	return 0;
}