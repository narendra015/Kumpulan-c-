#include<iostream>
using namespace std;

int main()
{
	int nilai;
	string nilaiHuruf;
	cout<<"masukkan nilai anda: ";
	cin>>nilai;
	if(nilai>= 90){
		nilaiHuruf="A";
	}
	else if(nilai>= 80){
		nilaiHuruf="B";
	}
	else if(nilai>=70){
		nilaiHuruf="C";
	}
	else if(nilai>=60){
		nilaiHuruf="D";
	}
	else{
		nilaiHuruf="F";
	}
	cout<<"Nilai huruf untuk nilai " 
		<<nilai<<" adalah "<<nilaiHuruf<<"."<<endl;
	return 0;
}