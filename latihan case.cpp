#include <iostream>
#include <cstdlib>

using namespace std;

void inputData();

class Mahasiswa {

	public :
		string name[100], npm[100], jeniskelamin[100], hobi[100];
		int jumlah;
			
	void show() {
		int i;
		
		for (i=1; i <= jumlah; i++){
		cout << "Nama		: " << name[i]<< "\n";
		cout << "NPM 		: " << npm[i] << "\n";
		cout << "Jenis Kelamin		: " << jeniskelamin[i] << "\n";
		cout << "Hobi	: " << hobi[i] << "\n\n\n";
	}
		
	}
};

int main(){
	Mahasiswa dinda;

	string name, npm, jeniskelamin, hobi, jumlah;
			
	int pilih;
	do {
		system("cls");
		cout << "Latihan " <<endl;
		cout << "1. Input Data" <<endl;
		cout << "2. Tampil Data" <<endl;
		cout << "3. Delete Data" <<endl;
		cout << "4. Exit" <<endl<<endl;
		cout << "Pilih : "; cin >> pilih;	
		
			
		switch(pilih) {
			case 1 : 	
			
				cout << "Masukkan Jumlah Mahasiswa : "; cin >> dinda.jumlah;
				for(int i = 1; i <= dinda.jumlah; i++){
					cout << "Objek ke -" << i <<endl;
					cout << "Masukkan Nama : "; cin >> dinda.name[i]; 
					cout << "Masukkan NPM : "; cin >> dinda.npm[i]; 
					cout << "Masukkan Jenis Kelamin : "; cin >> dinda.jeniskelamin[i]; 
					cout << "Masukkan Hobi : "; cin >> dinda.hobi[i];
					cout << "\n\n";
				}
				
				system("pause");
			break;
			case 2 : 
				dinda.show();
				
				system("pause");
			break;
			case 3 : break;
		}
	} while (pilih >= 1 && pilih <= 3);
	

	return 0;
}


