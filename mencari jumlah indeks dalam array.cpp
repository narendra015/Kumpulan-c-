#include <iostream>
using namespace std;

int main ()
{
	int angka[]={12,34,55,67};
	cout<<sizeof(angka)/sizeof(*angka);
	return 0;
}