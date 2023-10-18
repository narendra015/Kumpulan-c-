#include<iostream>
using namespace std;

int main()
{
int lamaKerja;
double upah,upahDiberi;	
cout<<"Masukkan lama kerja dalam jam: ";
cin>>lamaKerja;
cout<<"Masukkan upah: ";
cin>>upah;

if(lamaKerja<=40)
{
	upahDiberi=lamaKerja*upah;
}
else
{
	upahDiberi=(40*upah)+((lamaKerja-40)*(upah*1.5));
}
cout<<"Upah yang diberikan adalah: "<<upahDiberi<<endl;
return 0;
}