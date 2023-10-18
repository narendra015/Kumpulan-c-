#include <iostream>
using namespace std;

int main()
{
	int harga[]={1000,4000,3500};
	int jml_array=sizeof(harga)/sizeof(*harga);
	int total;
	
	for(int a=0;a<jml_array;a++)
	{
		total+= harga[a];//operator penugasan
	}
	cout<<"Total Harga = Rp."<<total<<endl;
	return 0;
}