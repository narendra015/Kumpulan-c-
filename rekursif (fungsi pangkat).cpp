#include <iostream>
using namespace std;

int pangkat(int x,int y)
{
	if(y==1)
	return x;
	else
	return(x*pangkat(x,y-1));
}

int main()
{
	int bil,n;
	cout<<"Masukkan nilai = ";
	cin>>bil;
	cout<<"Masukkan pangkat= ";
	cin>>n;
	cout<<"=============================="<<endl;
	cout<<"Hasil "<<bil<<" pangkat "<<n<<" adalah "<<pangkat(bil,n);
	return 0;
}