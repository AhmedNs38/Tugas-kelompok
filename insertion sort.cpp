#include <iostream>
using namespace std;

int main(){
	//menyiapkan variable untuk menampung inputan dari user
	int y;
	cout<<"Masukan banyaknya array:";
	cin>>y;
	int x[y];
	//melakukan perulangan untuk mengisi index dari setiap array, 
	for(int i=0; i<y; i++){
		cout<<"Masukan angka ke "<<i<<" :";
		cin>>x[i];
		cout<<endl;
	}
	//---proses sorting---
	//memulai perulangan dimulai dari array index ke 1 yang di implementasikan kedalam variable i
	for(int i=1; i<y; i++){
		//variable i akan menjadi kunci untuk dibandingkan dengan bilangan sebelumnya
		int key = x[i];
		int j = i-1;
		//jika bilangan sebelumnya lebih besar, maka key akan kembali dibandingkan dengan bilangan ke 2 sebelum i, 
		//dst hingga menemukan bilangan yang lebih kecil daripada i
		while(j>=0 && x[j] > key){
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = key;
		//menampilkan hasil dari setiap perulangan
		cout<<"Proses sorting"<<endl;
		for(int m=0;m<y;m++){
		cout<<x[m]<<" ";
	    }
	    cout<<endl;
	}
	//menampilkan hasil akhir dari proses sorting
	cout<<"Hasil akhir"<<endl;
	for(int m=0;m<y;m++){
		cout<<x[m]<<" ";
	}
}
