#include <iostream>
using namespace std;

int main()
{
	int baris,kolom;
	string ulang;

	cout<<"Input jumlah baris matriks= ";
	cin>>baris;
	cout<<"input jumlah kolom matriks= ";
	cin>>kolom;
	cout<<"=========================="<<endl;
	
	do
	{
	int array[baris][kolom];
	
	
	for (int a=0;a<baris;a++)
	{
        for (int b=0;b<kolom;b++)
		{
            cout << "Masukkan Baris ke-" <<a<<","<<"Kolom ke- "<<b<< " = ";
            cin >> array[a][b];
        }
    }
    
	cout<<endl;
	cout<<"Hasil matriks :"<<endl;
	cout<<"=========================="<<endl;
	
	for(int a=0;a<baris;a++)
	{
		for(int b=0;b<kolom;b++)
		{
			cout<<array[a][b]<<" ";
		}
		cout<<endl;
	}
	cout<<"==========================";
	cout<<endl;
	cout<<"ingin ulangi lagi(y/n): ";
	cin>>ulang;
	cout<<endl;
	}
	while(ulang=="y");
	cout<<endl;
	
return 0;	
 } 