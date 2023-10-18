#include<iostream>//sebagai standar input output operasi yang digunakan
using namespace std;//sebagai standard library 

int main()// fungsi yang akan dieksekusi pertamakali saat program dijalankan
{
	int nim,ulang,sks,tagihan;//deklarasi fungsi nim,ulang,sks,dan tagihan
	string prodi,SI="SI",KA="KA";//deklarasi fungsi prodi,SI yang bernilai "SI",KA yang bernilai "KA"
	char nama [30];//deklarasi fungsi nama dengan panjang karakter 30
	
	
	cout<<"Masukkan NIM  = ";//menampilkan Masukkan NIM 
	cin>>nim ;//input data NIM
	cout<<"Masukkan Nama = ";//menampilkan Masukkan Nama
	cin>>nama;//input data nama
	ulang://memanggil fungsi ulang
	cout<<"Masukkan Prodi[SI/KA] = ";//menampilkan Masukkan Prodi[SI/KA] 
	cin>>prodi;//input data prodi
	
	if (prodi==SI || prodi==KA)//percabangan jika prodi bernilai SI atau KA maka akan menjalankan statment if
		{//tanda mulai statment if
			cout<<"Prodi Ada\n";//statment if akan berjalan jika if bernilai true
		}//tanda akhir statment if
	else//statment else akan berjalan jika if bernilai false
		{//tanda mulai statmen else
			cout<<"Prodi Tidak Ada\n";//statment else akan berjalan jika else bernilai true
			goto ulang;//untuk mengatur arahnya aliran pengeksekusian CPU terhadap program
		}//tanda akhir statmen else 
	cout<<"\n";//untuk memberikan space pada bagian baris sebelumnya            
	cout<<"Masukkan jumlah sks = ";//menampilkan Masukkan jumlah sks
	cin>>sks;//input data sks
	cout<<"\n";//untuk memberikan space pada bagian baris sebelumnya
	if (prodi==SI)  //percabangan jika prodi bernilai SI maka akan menjalankan statment if
		{//tanda mulai statment if
		  tagihan =sks * 100000;//statment if akan berjalan jika if bernilai true
		  cout << "Tagihan Biaya SKS 1 Semester Rp " << tagihan;  //menampilkan hasil
		}//tanda akhir statmen if
	else//statment else akan berjalan jika if bernilai false
		if (prodi == KA)  //percabangan jika prodi bernilai KA maka akan menjalankan statment if
			{//tanda mulai statment if
			tagihan =sks * 75000;  //statment if akan berjalan jika if bernilai true
			cout << "Tagihan Biaya SKS 1 Semester Rp. " << tagihan;  //menampilkan hasil
			}//tanda akhir statment if
	cout<<"\n\n";//untuk memberikan space pada bagian baris sebelumnya	
	cout<<"\t\tSelesai,Terimakasih.";//menampilkan Selesai,Terimakasih
}