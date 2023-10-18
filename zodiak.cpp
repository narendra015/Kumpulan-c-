#include <iostream>
using namespace std;

int main ()
{

int t,b;

cout<<"Masukkan Tanggal Lahir : ";
cin>>t;
cout<<"Masukkan Bulan Lahir : ";
cin>>b;
cout<<"============================="<<endl;
   if ((t>=21&&t<=31 && b==12) || (t>=1&&t<=20 && b==1))
   {
    cout<<"Zodiak Anda adalah Capricorn"<<endl;
   }
   else if ((t>=21&&t<=31 && b==1) || (t>=1&&t<=20 && b==2))
   {
	cout<<"Zodiak Anda adalah Aquarius"<<endl;
   }
   else if((t>=21&&t<=28 && b==2) || (t>=1&&t<=20 && b==3))
   {
    cout<<"Zodiak Anda adalah Pisces"<<endl;
   }
   else if ((t>=21&&t<=31 && b==3) || (t>=1&&t<=20 && b==4))
   {
    cout<<"Zodiak Anda adalah Aries"<<endl;
   }
   else if((t>=21&&t<=30 && b==4) || (t>=1&&t<=20 && b==5))
   {
    cout<<"Zodiak Anda adalah Taurus"<<endl;
   }
   else if ((t>=21&&t<=31 && b==5) || (t>=1&&t<=20 && b==6))
   {
    cout<<"Zodiak Anda adalah Gemini"<<endl;
   }
   else if((t>=21&&t<=30 && b==6) || (t>=1&&t<=20 && b==7))
   {
	cout<<"Zodiak Anda adalah Cancer"<<endl;
   }
   else if((t>=21&&t<=31 && b==7) || (t>=1&&t<=20 && b==8))
   {
    cout<<"Zodiak Anda adalah Leo"<<endl;
   }
   else if((t>=21&&t<=31 && b==8) || (t>=1&&t<=20 && b==9))
   {
    cout<<"Zodiak Anda adalah Virgo"<<endl;
   }
   else if((t>=21&&t<=30 && b==9) || (t>=1&&t<=20 && b==10))
   {
    cout<<"Zodiak Anda adalah Libra"<<endl;
   }
   else if((t>=21&&t<=31 && b==10) || (t>=1&&t<=20 && b==11))
   {
    cout<<"Zodiak Anda adalah Scorpio"<<endl;
   }
   else if((t>=21&&t<=30 && b==11) || (t>=1&&t<=20 && b==12))
   {
    cout<<"Zodiak Anda adalah Sagitarius"<<endl;
   }
   cout<<"============================="<<endl;
return 0;
}

