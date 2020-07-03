#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class shape {
	public :
		
		string nama, jenis_bentuk;
		
		shape(string nama, string jenis_bentuk){
   			this->nama    = nama;
   			this->jenis_bentuk = jenis_bentuk;
  		}
		
		void set_nama(string inama, int n) {
			nama = inama;
		}
		void set_jenis_bentuk(string ijenis_bentuk, int n) {
			jenis_bentuk = ijenis_bentuk;
		}
		
		   string getNama(){
		   return this->nama;
		  }
		  
		  string getJenis_bentuk(){
		   return this->jenis_bentuk;
		  }
		double luas();
};

class persegi_panjang : virtual public shape {
		protected :
			int panjang, lebar;
		
		public :
		
		persegi_panjang(string nama, string jenis_bentuk, int panjang, int lebar) : shape(nama, jenis_bentuk) {
   			this->panjang    = panjang;
   			this->lebar = lebar;
  		}
  		
		void set_panjang(int ipanjang, int n) {
			panjang = ipanjang;
		}
		
		void set_lebar(int ilebar, int n) {
			lebar = ilebar;
		}
		
		int getPanjang(){
		   return this->panjang;
		  }
		  
		  int getLebar(){
		   return this->lebar;
		  }
		  
		double luas_pp () { 
			return this->panjang*this->lebar;
//			cout << "Nama	Jenis Bentuk		Panjang		Lebar" <<endl;
//			
//				printf("%-8s %-24s %-16s %s", this->nama.c_str(), this->jenis_bentuk.c_str(), this->panjang.c_str(), this->lebar.c_str());
//			
		}
};

class lingkaran : virtual public shape {
	protected :
		double jari_jari, phi=3.14;
	public :
		lingkaran(string nama, string jenis_bentuk, double jari_jari) : shape(nama, jenis_bentuk){
			this->jari_jari    = jari_jari;
   			
		}
		
	
		void set_jari_jari(double ijari_jari, double n) {
			jari_jari = ijari_jari;
		}
		
	
			double getJari_jari(){
		   return this->jari_jari;
		  }
		  	
		  
		double luas_link() {
			return this->jari_jari*this->jari_jari*this->phi;
		}

	
};

class tabung : public persegi_panjang, lingkaran{
	public :
		//using persegi_panjang::shape;
		//using lingkaran::lingkaran;
		tabung(string nama, string jenis_bentuk, int panjang, int lebar, double jari_jari ) : persegi_panjang(nama, jenis_bentuk, panjang, lebar), lingkaran(nama, jenis_bentuk, jari_jari), shape(nama, jenis_bentuk){
			//this->pangkat    = pangkat;
		}

		
		double luas_permukaan() {
			return 2*this->luas_link()+this->luas_pp();
//			cout << "Nama	Jenis Bentuk		Panjang 		Lebar		Jari-Jari" <<endl;
//				printf("%-8s %-24s %-16s %-15s %s", this->nama.c_str(), this->jenis_bentuk.c_str(), this->panjang.c_str(), this->lebar.c_str(), this->jari_jari.c_str());
		}
};

int main() {
	int menu;
	string inama, ijenis_bentuk, ipanjang, ilebar, ijari_jari;
	persegi_panjang pg("Fikri", "Persegi Panjang", 5, 4);
	cout << pg.luas_pp();
	cout << endl;
	cout << endl;
	lingkaran lk("Fikri", "Lingkaran", 10);
	cout << lk.luas_link();
	cout << endl;
	cout << endl;
	tabung tab("Fikri", "Tabung", 5, 4, 10);
	cout << tab.luas_permukaan();
	cout << endl;
	
	return 0;
}
