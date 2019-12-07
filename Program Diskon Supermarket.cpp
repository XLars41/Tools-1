#include <iostream.h>
#include <conio.h>

void main()
{

float Belanja;

cout<<"Masukkan total belanja : RP.";
cin>>Belanja;

if (Belanja>=500000)
		{
	cout<<"\n\nTotal belanja anda adalah : RP."<<Belanja;
	cout<<"\n\nSELAMAT!!! ANDA MENDAPAT DISKON SEBESAR 15%!!!";
   cout<<"\n\nHarga setelah diskon sebesar : RP."<<Belanja-(Belanja*0.15);
   cout<<"\n\nTerima kasih! Selamat datang kembali :D";
   	}

else if (Belanja>=300000)
   	{
	cout<<"\n\nTotal belanja anda adalah : RP."<<Belanja;
	cout<<"\n\nSELAMAT!!! ANDA MENDAPAT DISKON SEBESAR 10%!!!";
   cout<<"\n\nHarga setelah diskon sebesar : RP."<<Belanja-(Belanja*0.10);
   cout<<"\n\nTerima kasih! selamat datang kembali :D";
		}

else if (Belanja>=250000)
      {
	cout<<"\n\nTotal belanja anda adalah : RP."<<Belanja;
   cout<<"\n\nSELAMAT!!! ANDA MENDAPAT DISKON SEBESAR 5%!!!";
   cout<<"\n\nHarga setelah diskon sebesar : RP."<<Belanja-(Belanja*0.05);
   cout<<"\n\nTerima kasih! Selamat datang kembali :D";
      }

else if (Belanja>=200000)
      {
	cout<<"\n\nTotal belanja anda adalah : RP."<<Belanja;
   cout<<"\n\nSELAMAT!!! ANDA MENDAPAT HADIAH PAYUNG CANTIK!!!";
   cout<<"\n\nTerima kasih! Selamat datang kembali :D";
   	}

else if (Belanja>=100000)
		{
	cout<<"\n\nTotal belanja adalah : RP."<<Belanja;
   cout<<"\n\nSELAMAT!!! ANDA MENDAPAT HADIAH PIRING CANTIK!!!";
   cout<<"\n\nTerima kasih! Selamat datang kembali :D";
      }

else if (Belanja<=99999)
		{
	cout<<"\n\nTotal belanja adalah : RP."<<Belanja;
   cout<<"\n\nTerima kasih! Selamat datang kembali :D";
      }

getch();
}
