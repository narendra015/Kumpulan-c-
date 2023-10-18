#include <iostream>
using namespace std;

int main ()
{
	int nilai_akhir;
	int huruf;
	float tugas,UAS,UTS,keaktifan;
	
	cout<<"Masukkan Nilai Tugas = ";
	cin>>tugas;
	cout<<"Masukkan Nilai UTS = ";
	cin>>UTS;
	cout<<"Masukkan Nilai UAS = ";
	cin>>UAS;
	cout<<"Masukkan Nilai Keaktifan = ";
	cin>>keaktifan;
	cout<<endl;
	
	nilai_akhir=(tugas*20/100)+(UTS*35/100)+(UAS*35/100)+(keaktifan*10/100);
	
		
	cout << "-DATA NILAI STRUKTUR DATA-" << endl;
	cout <<" ----------------------------" << endl << endl;
	
	cout << "Nilai Akhir Anda = " <<nilai_akhir<< endl;
	
	
	if (nilai_akhir>80)
	{
	cout<<"Nilai Huruf=A";
	}
	else if(nilai_akhir<=80 && nilai_akhir>60){
	cout<<"Nilai Huruf=B";
	}
	else if(nilai_akhir<=60 && nilai_akhir>40){
	cout<<"Nilai Huruf=C";
	}
	else if(nilai_akhir<=40 && nilai_akhir>=20){
	cout<<"Nilai Huruf=D";
	}
	else{
	cout<<"Nilai Huruf=E";
	} 
	return 0;
}