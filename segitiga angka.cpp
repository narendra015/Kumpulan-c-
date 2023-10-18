#include <iostream>
using namespace std;
int main()
{
  int  i, j,n, baris;
  cout << "Masukkan jumlah baris:  ";
  cin >> baris;
for (n = baris; n >= 1;n--)
  cout<<"1"<<endl;
  for (i = baris; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      cout <<"0";
    }
    cout << "\n";
  }
  return 0;
}
