#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Input jumlah index a & b = ";
	cin>>n;
	cout<<"=========================="<<endl;
	
	
	int a[n],b[n],c[n],j=n-1;
	
	cout << "array a"<<endl ;
	for (int i=0;i<n;i++)
	{
		cout<<"a ["<<i<<"] = ";
        cin >> a[i];
    }
    cout<<endl;
    
	cout << "array b"<<endl ;
	for (int i=0;i<n;i++)
	{
		cout<<"b ["<<i<<"] = ";
        cin >> b[i];
    }
	cout<<endl;
	
	for (int i=0;i<n;i++)
	{
		c[i]=a[i]+b[j];
		cout<<"nilai c ["<<i<<"] = "<<a[i]<<" + "<<b[j]<<" = "<<c[i]<<endl;
		j--;
	}

}