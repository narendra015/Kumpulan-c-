#include<iostream>
using namespace std;

int main()
{
	double ip;
	cout<<"IPK : ";
	cin>>ip;
	if(ip>=2.00&&ip<=2.75)
	cout<<"Lulus Memuaskan \n";
	else
	if(ip>=2.75&&ip<=3.50)
	cout<<"Lulus Sangat Memuaskan \n";
	else
	if(ip>=3.50&&ip<=4.00)
	cout<<"Lulus Dengan Pujian \n";
	else
	cout<<"Data tidak Valid \n";
	return 0;
}