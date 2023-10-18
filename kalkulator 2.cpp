 #include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int bil1,bil2, pil;
	float hasil;
	string operasi;
	string ulang;
	;
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<endl;

	do
	{
	cout<<endl;
	cout<<"Masukan Pilihan 1-5 : ";
	cin>>pil;
	cout<<endl;
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<endl;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2;
	cout<<endl;	
	
	switch(pil)
	{
	        case 1 : hasil=bil1+bil2;
			operasi='+';
			break;
		case 2 : hasil=bil1-bil2;
			operasi='-';
			break;
		case 3 : hasil=bil1*bil2;
			operasi='*';
			break;
		case 4 : hasil=bil1/bil2;
			operasi='/';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<"Hasil: "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl<<endl;
	cout<<"ingin menghitung lagi(y/n): ";
	cin>>ulang;

	}
	while(ulang=="y");
	cout<<endl;
	
	getch();
}