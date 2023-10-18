#include<iostream>
using namespace std;

int main()
{
	int k,s,a;
	
	cout<<"Masukkan Jumlah Kasus : ";
	cin>>k;
	
	int hasil;
	int total;
	cout<<"\n\n";
	
	for(a=1;a<k+1;a++)
	{
	cout<<"--- kelas "<<a<<" ---";	
	cout<<"\nMasukkan Jumlah siswa : ";
	cin>>s;

	int arr[s];
	
	cout<<"\n--- iuran siswa ---\n";
	for(int c=1;c<s+1;c++)
	{
		cout<<"siswa "<<c<<" : Rp.";
		cin>>arr[c]; 
	}

	cout<<"\n";
	hasil=0;
	for(a=1;a<k+1;a++)
	{
		hasil=hasil+arr[a];
	}
}
	cout<<"--- Rekap hasil iuran ---\n";
	
	for(a=1;a<k+1;a++)
	{
		cout<<"subtotal iuran kelas "<<a<<" = Rp."<<hasil<<endl;
	}

	cout<<"Total iuran kelas seluruh kelas = Rp."<<total<<endl;

}


