#include <iostream>
using namespace std;

int main()
{
	int x;
	string ulangi;
	do
	{
		cout<<"kamu itu cantik tau"<<endl;
		cout<<"iya/gak = ";
		cin>>ulangi;
		
		if(ulangi== "iya")
		cout<<"jadi makin suka sama kamu";
		else
		cout<<"jadi orang harus percaya diri dong";
	}
	while(ulangi=="y\n");
	
	return 0;
}