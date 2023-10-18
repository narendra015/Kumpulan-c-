#include<iostream>
using namespace std;

int main()
{
	int n;
	bool ulang= false;
	cout<<"masukkan panjang elemen = ";
	cin>>n;
	
	int a[n],b[n];
	
	for(int i=0;i<n;i++)
	{
		cout <<"Array A[ "<<i<<" ]= ";
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	do
	{
		for(int i=0;i<n;i++)
		{
			ulang=false;
			for(int j=0;j<n-1;j++)
			{
				if(b[j]>b[j+1])
				{
					b[j]=b[j]+b[j+1];
					b[j+1]=b[j]-b[j+1];
					b[j]=b[j]-b[j+1];
					ulang=true;
				}
			}
		}
	}
	while(ulang);
	
		cout<<"\nArray A [ "<<n<<" ] = ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<"\n\n";
	cout<<"\nArray B [ "<<n<<" ] = ";
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
}