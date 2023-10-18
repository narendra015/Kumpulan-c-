#include<iostream>//sebagai standar input output operasi yang digunakan
using namespace std;//sebagai standard library 

int main()// fungsi yang akan dieksekusi pertamakali saat program dijalankan
{
	int a[5]={3,2,1,7,5};// membuat array 'a' dengan tipe data integer dan panjang 5 dengan isi {3,2,1,7,5}
	int b[5]={1,9,2,1,4};// membuat array 'b' dengan tipe data integer dan panjang 5 dengan isi {1,9,2,1,4}
	int c[5],j=4,z=0,i=0;/*membuat array kosong 'c' dengan tipe data integer dan panjang 5
							deklarasi j bernilai 4, z bernilai 0, i bernilai 0 */
						
	
	for(i=0;i<5;i++)/*perulangan for, i bernilai 0, 
					perulangan akan berjalan selama nilai i masih kurang dari 5
					i++ untuk menambah variabel sebanyak 1 angka*/
	{
		c[z]=a[i]+b[j];//rumus penambahan 
		cout<<"nilai c ["<<i<<"] = "<<a[i]<<" + "<<b[j]<<" = "<<c[z];//menampilkan hasil nilai c
		cout<<"\n";//untuk memberikan space pada bagian baris sebelumnya
		j--;//selama perulangan for masih berjalan maka j akan selalu mengurangi variabel sebanyak 1 angka
	}
}
