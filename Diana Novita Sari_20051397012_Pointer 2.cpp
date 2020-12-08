#include <iostream>
#include <sstream>

using namespace std;


int main(int argc, char *argv[])
{
	string k = "##############################################";
	cout << " ================================================"<< endl;
	cout << " Selamat Datang di Program Pointer "<< endl;
	cout << " Mengetahui Nilai Mata Kuliah " << endl;
	const int ukuran_array = 5;
	int nilai_maksimal = 0;
	string namap;
	string array[ukuran_array][2];
	string kategori;
	
	
	for(int i = 0; i <= ukuran_array - 1; i++){
		cout << k << endl;
		cout << "nilai ke-" << i + 1 << endl;
		cout << "masukan nama : "; 
		cin >>  *(*(array+i)+0);
		cout << "masukan nilai : "; 
		cin >> *(*(array+i)+1);
		cout<<endl;
	}
	

    cout << endl << "Kategorisasi Nilai" << endl << k << endl << endl;
    
	for(int p = 0; p <= ukuran_array-1; p++){
		string nama = *(*(array+p)+0);
		istringstream ss(*(*(array+p)+1));
		int nilai;
		ss >> nilai;
		if(nilai >= 90 && nilai <= 100){
		kategori = "A";
	}
	else if(nilai >= 80 && nilai < 90){
		kategori = "B";
	}
	else if(nilai >= 70 && nilai < 80){
		kategori = "C";
	}
	else if(nilai >= 60 && nilai < 70){
		kategori = "D";
	}
	else if(nilai >= 50 && nilai < 60){
		kategori = "E";
	}
	else if(nilai < 50){
		kategori = "Tidak Lulus";
	}
	
		cout <<endl<<endl<< k << endl<< "Nama : " << nama << endl << "Nilai : " << nilai << endl << "Kategori Nilai : " << kategori<< endl;
		if(nilai > nilai_maksimal){
		nilai_maksimal = nilai;
		namap = nama;
		}
	}
	
	cout << endl << k << endl << "Nilai Maksimum : " << nilai_maksimal << endl << "Oleh : " << namap << endl << k << endl;
	cout << " Terima Kasih telah Berkunjung" << endl;

return 0;
}
