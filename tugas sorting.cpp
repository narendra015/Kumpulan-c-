#include<iostream>//sebagai standar input output operasi yang digunakan
using namespace std;//sebagai standard library 

int main()// fungsi yang akan dieksekusi pertamakali saat program dijalankan
{
	int n;//deklarasi fungsi n
	
	cout<<"Input jumlah index A = ";//menampilkan Input jumlah index A 
	cin>>n;//input jumlah index A
	cout<<"=========================="<<endl;
	
	
	int a[n],b[n],j;/*deklarasi array 'a' dengan tipe data integer dan panjang n
					  deklarasi array 'b' dengan tipe data integer dan panjang n
					  deklarasi fungsi j*/
	
	cout << "array A"<<endl ;//menampilkan Array A 
	for (int i=0;i<n;i++)/*perulangan for, i bernilai 0,
						   perulangan akan berjalan selama nilai i masih kurang dari nilai n
						   i++ untuk menambah variabel sebanyak 1 angka*/
	{
		cout<<"A ["<<i<<"] = ";//menampilkan A [ ] 
        cin >> a[i];//input nilai a
    }
    cout<<endl;//untuk memberikan space pada bagian baris sebelumnya	
    
    cout<<"array A belum di urutkan\n\n";//menampilkan array A belum di urutkan
    for (int i=0;i<n;i++)/*perulangan for, i bernilai 0,
						   perulangan akan berjalan selama nilai i masih kurang dari nilai n
						   i++ untuk menambah variabel sebanyak 1 angka*/
	{
		cout<<"A ["<<i<<"] = "<<a[i]<<"\n";//menampilkan data array a
	}
	cout<<"\n\n";//untuk memberikan space pada bagian baris sebelumnya	
    
	int ulang=0;//deklarasi fungsi ulang yang bernilai 0
	bool tukar=false;//deklarasi tukar dengan nilai false
	do//statement perulangan do while
	{
		tukar=false;//jika tukar bernilai false maka for akan berjalan
		for (int i=0;i<n-1;i++)/*perulangan for, i bernilai 0,
						       perulangan akan berjalan selama nilai i masih kurang dari nilai n
						       i++ untuk menambah variabel sebanyak 1 angka*/
		{
			if(a[i]>a[i+1])//jika a[i] lebih dari a[i+a] maka lanjut untuk melakukan pertukaran
			{
				//proses pertukaran 
				a[i]=a[i]+a[i+1];//ex a[1]=a[1]+a[2]
				a[i+1]=a[i]-a[i+1];//ex a[2]=a[1]-a[2]
				a[i]=a[i]-a[i+1];//ex a[1]=a[1]-a[2]
				tukar=true;//jalankan tukar jika bernilai true
			}
		}
		ulang++;//memanggil fungsi ulang dan akan bertambah variabel sebanyak 1 angka setiap pemanggilan	
	}while(tukar);
	
	cout<<"array B sudah di urutkan\n\n";//menampilkan array B sudah di urutkan
	for(int i=0;i<n;i++)/*perulangan for, i bernilai 0,
						  perulangan akan berjalan selama nilai i masih kurang dari nilai n
						  i++ untuk menambah variabel sebanyak 1 angka*/
	{
		b[i]=a[i];//nilai b[i] sama dengan nilai dari a[i]
		cout<<"B ["<<i<<"] = "<<b[i]<<endl;//menampilkan data array b
	}
	cout<<"\n\n";//untuk memberikan space pada bagian baris sebelumnya	
	cout<<"ulang = "<<ulang;//menampilkan berapa banyak melakukan sebuah perulangan
}
