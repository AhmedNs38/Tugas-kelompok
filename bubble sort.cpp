#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int data [100];
	int i, j, k; 
	cout<<"PROGRAM PENGURUTAN BILANGAN BUBBLE SORT \n\n";
	cout<<"Masukkan Jumlah Bilangan : ";cin>>k;
	for(i=0; i<k; i++)
	{
		cout<<"Masukkan Angka ke "<<(i+1)<<" : ";
		cin>>data[1];
	}
	cout<<"\nAngka Sebelum Diurutkan : "<<endl;
	for(i=0; i<k; i++);
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	for(i=0; i<k; i++)
	{
		for(j=i+1; i<k; i++)
		{
			if(data[i]>data[j])
			{
				data[i];
				data[i]=data[j];
				data[j];
			}	
		}
	}
		cout<<"\nangka Setelah Diurutkan : "<<endl;
	for(i=0; i<k; i++)
	{
		{
		cout<<data[i]<<" ";
		}
	}
	getch();
}
	
	
		


