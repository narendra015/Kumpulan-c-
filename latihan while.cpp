#include <iostream>
using namespace std;

int main()
{
	int awal,akhir;
	cout<<"masukkan nilai awal = ";
	cin>>awal;
	cout<<"masukkan nilai akhir = ";
	cin>>akhir; 
	
	cout<<"==================\n";
	
	int x;
	x=awal;
	while(x<=akhir)
	{
		cout<<"  "<<x<<" aku suka kamu\n";
		x++;
	}
	return 0;
}