#include<iostream>
using namespace std;

int main()
{
char nama[30];
string nim;
char alamat_rumah[50];
string nomor_hp;

	cout<<"masukkan nama anda:";	//masukkan nama
	cin>>nama;
	cout<<"masukkan nim anda:";		//masukkan nim
	cin>>nim;
	cout<<"masukkan alamat rumah:"; //masukkan alamat rumah
	cin>>alamat_rumah;
	cout<<"masukkan nomor hp:";		//masukkan nomor hp
	cin>>nomor_hp;
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"coba cek data anda lagi:"<<endl;
	cout<<"nama anda adalah "<<nama<<endl;
	cout<<"nim anda adalah "<<nim<<endl;
	cout<<"alamat rumah anda adalah "<<alamat_rumah<<endl;
	cout<<"nomor hp anda adalah "<<nomor_hp<<endl;
	return 0;
}
