#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Manusia {
	public :
		
		string nama, jenisKelamin, alamat;
		
		Manusia(string nama, string jenisKelamin, string alamat){
   			this->nama    = nama;
   			this->jenisKelamin = jenisKelamin;
   			this->alamat   = alamat;
  		}
		
		void set_nama(string inama, int n) {
			nama = inama;
		}
		void set_jenisKelamin(string ijenisKelamin, int n) {
			jenisKelamin = ijenisKelamin;
		}
		void set_alamat(string ialamat, int n) {
			alamat = ialamat;
		}
		
			string getNama(){
		   return this->nama;
		  }
		  
		  string getJenisKelamin(){
		   return this->jenisKelamin;
		  }
		  
		  string getAlamat(){
		   return this->alamat;
		  }
		
};

class Mahasiswa : public Manusia {
		protected :
			string npm, ipk;
		
		public :
		
		Mahasiswa(string nama, string npm, string alamat, string jenisKelamin, string ipk) : Manusia(nama, jenisKelamin, alamat) {
   			this->npm    = npm;
   			this->ipk = ipk;
  		}
  		
		void set_npm(string inpm, int n) {
			npm = inpm;
		}
		
		void set_ipk(string iipk, int n) {
			ipk = iipk;
		}
		
		string getNPM(){
		   return this->npm;
		  }
		  
		  string getIPK(){
		   return this->ipk;
		  }
		  
		void cetak() {
			cout << "Nama		NPM		Alamat		IPK" <<endl;
			
				printf("%-11s %-12s %-19s %s", this->nama.c_str(), this->npm.c_str(), this->alamat.c_str(), this->ipk.c_str());
			
		}
};

class Pegawai : public Manusia {
	protected :
		string nip, jabatan, golongan;
	public :
		Pegawai(string nama, string nip, string jabatan, string golongan, string alamat, string jenisKelamin) : Manusia(nama, jenisKelamin, alamat){
			this->nip    = nip;
   			this->jabatan = jabatan;
   			this->golongan  = golongan;
		}
		
	
		void set_nip(string inip, int n) {
			nip = inip;
		}
		void set_jabatan(string ijabatan, int n) {
			jabatan = ijabatan;
		}
		void set_golongan(string igolongan, int n) {
			golongan = igolongan;
		}
	
			string getNIP(){
		   return this->nip;
		  }
		  
		  string getJabatan(){
		   return this->jabatan;
		  }	
		  string getGolongan(){
		  	return this->golongan;
		  }
		
		void cetak() {
			cout << "Nama		NIP		Alamat		Jabatan		Golongan" <<endl;
			
				printf("%-11s %-12s %-19s %-15s	%s", this->nama.c_str(), this->nip.c_str(), this->alamat.c_str(), this->jabatan.c_str(), this->golongan.c_str());
			
		}
	
};

class Polisi : public Pegawai{
	public :
		string pangkat;
		
		Polisi(string nama, string nip, string pangkat, string jabatan, string golongan, string alamat, string jenisKelamin) : Pegawai(nama, nip, jabatan, golongan, alamat, jenisKelamin){
			this->pangkat    = pangkat;
		}

		void set_pangkat(string ipangkat, int n) {
			pangkat = ipangkat;
		}

		  string getPangkat(){
		  	return this->pangkat;
		  }
		
		void cetak() {
			cout << "Nama		NIP		Alamat 		Jabatan		Golongan	Pangkat" <<endl;
				printf("%-11s %-12s %-19s %-19s %-19s %s", this->nama.c_str(), this->nip.c_str(), this->alamat.c_str(), this->jabatan.c_str(), this->golongan.c_str(), this->pangkat.c_str());
		}
};

int main() {
	int menu;
	string inama, inpm, ialamat, iipk, inip, ijabatan, igolongan, ipangkat;
	Mahasiswa mhs("Fikri", "0617104005", "Gading", "Laki", "78");
	mhs.cetak();
	cout << endl;
	cout << endl;
	Pegawai peg("Fikri", "06171", "Jenderal", "Kiri", "Gading", "Laki");
	peg.cetak();
	cout << endl;
	cout << endl;
	Polisi pol("Fikri", "0617", "Letjen", "Jenderal", "Kiri", "Gading", "Laki");
	pol.cetak();
	cout << endl;
	
//	do{
//		system("cls");
//		system("cls");
//		cout << "1. Mahasiswa" << endl;
//		cout << "2. Pegawai" << endl;
//		cout << "2. Polisi" << endl;
//		
//		cout << "menu : "; cin >> menu; 
//		if (menu == 1){
//			int menu1;
//			system("cls");
//			cout << "1. Input Data" << endl;
//			cout << "2. Menampilkan Data" << endl;
//			cout << "Menu : "; cin >> menu1;
//			
//			switch(menu1){
//				case 1 :
//					system("cls");
//					cout << "input data " << endl;
//					cout << "nama : "; cin >> inama;
//					cout << "npm : "; cin >> inpm;
//					cout << "alamat : "; cin >> ialamat;
//					cout << "ipk : "; cin >> iipk;
//					
//					mhs.set_nama(inama, n);
//					mhs.set_npm(inpm, n);
//					mhs.set_alamat(ialamat, n);
//					mhs.set_ipk(iipk, n);
//					cout << endl << "\ndata berhasil disimpan!\n";
//					cout << endl;
//					system("pause");
//					n++; break;
//				case 2 :
//					system("cls");
//					mhs.cetak(n);
//					cout << endl;
//					system("pause");
//					break;
//			}		
//			
//		} else if (menu == 2){
//			int menu3;
//			system("cls");
//			cout << "1. Input Data" << endl;
//			cout << "2. Menampilkan Data" << endl;
//			cout << "Menu : "; cin >> menu3;
//			
//			switch(menu3) {
//				case 1 : 
//				system("cls");
//				cout << "input data " << endl;
//				cout << "nama : "; cin >> inama;
//				cout << "nip : "; cin >> inip;
//				cout << "alamat : "; cin >> ialamat;
//				cout << "jabatan : "; cin >> ijabatan;
//				cout << "golongan : "; cin >> igolongan;
//				
//				peg.set_nama(inama, n);
//				peg.set_nip(inip, n);
//				peg.set_alamat(ialamat, n);
//				peg.set_jabatan(ijabatan, n);
//				peg.set_golongan(igolongan, n);
//				cout << endl << "data berhasil disimpan!"<<endl <<endl;
//				system("pause");
//				break;
//				
//				case 2 :
//					system("cls");
//					peg.cetak(n);
//					cout << endl;
//					system("pause");
//					break;
//			}
//			
//
//			 
//		} else {
//			int menu2;
//			system("cls");
//			cout << "1. Input Data" << endl;
//			cout << "2. Menampilkan Data" << endl;
//			cout << "Menu : "; cin >> menu2;
//			
//			switch(menu2) {
//				case 1 : 
//				system("cls");
//				cout << "input data " << endl;
//				cout << "nama : "; cin >> inama;
//				cout << "nip : "; cin >> inip;
//				cout << "alamat : "; cin >> ialamat;
//				cout << "jabatan : "; cin >> ijabatan;
//				cout << "golongan : "; cin >> igolongan;
//				cout << "pangkat : "; cin >> ipangkat;
//				
//				pol.set_nama(inama, n);
//				pol.set_nip(inip, n);
//				pol.set_alamat(ialamat, n);
//				pol.set_jabatan(ijabatan, n);
//				pol.set_golongan(igolongan, n);
//				pol.set_pangkat(ipangkat, n);
//				cout << endl << "data berhasil disimpan!"<<endl <<endl;
//				system("pause");
//				break;
//				
//				case 2 :
//					system("cls");
//					pol.cetak(n);
//					cout << endl;
//					system("pause");
//					break;
//			}
//			
//
//		}	 
//		
//	} while(menu>=1 && menu<=3);
	return 0;
}
