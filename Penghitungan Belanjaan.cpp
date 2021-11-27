#include <iostream>
#include <cmath>
using namespace std;

int main(){
	system ("color 0B");
	
	float HargaSebuahPena;
	float HargaSebuahBuku;
	float HargaSebuahPenghapus;
	float HargaSebuahPenggaris;
	
	cin>> HargaSebuahPena;
	cin>> HargaSebuahBuku;
	cin>> HargaSebuahPenghapus;
	cin>> HargaSebuahPenggaris;

	cout<<endl;

	cout<< "Harga 82 Buah Pena	= Rp " <<82*HargaSebuahPena <<endl;
	cout<< "Harga 82 buah Buku 	= Rp " <<82*HargaSebuahBuku <<endl;
	cout<< "Harga 82 buah Penghapus = Rp " <<82*HargaSebuahPenghapus <<endl;
	cout<< "Harga 82 buah Penggaris = Rp " <<82*HargaSebuahPenggaris <<endl;

	
	return 0;
}
