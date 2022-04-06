using namespace std;

class input {
	public :
		void cetak(){
			cout<<"----------------------------------"<<endl;
  			cout<<"       Rumah Makan Kenyang        "<< endl;
 			cout<<"----------------------------------" <<endl;
  			cout<< "         Daftar Menu            " << endl;
  			cout<< "1. Ayam Geprek\t: Rp. 21000" << endl;
  			cout<< "2. Ayam Goreng\t: Rp. 17000" << endl;
  			cout<< "3. Udang Goreng\t: Rp. 19000" << endl;
  			cout<< "4. Cumi Bakar\t: Rp. 20000" << endl;
  			cout<< "5. Ayam Bakar\t: Rp. 25000" << endl;
    		cout<< "Masukkan Pilihan Menu : "<<endl;
    		cout<< "Ayam Geprek  -> "; cin >> bnyk_aymGp;
			  cout<< "Ayam Goreng  -> "; cin >> bnyk_aymGr;
			  cout<< "Udang Goreng  -> "; cin >> bnyk_udgGr;
			  cout<< "Cumi Bakar  -> "; cin >> bnyk_cmBk;
			  cout<< "Ayam Bakar  -> "; cin >> bnyk_aymBk;
			  cout<< "Masukan Jarak Rumah(km) : ";cin>>jarak;
		}

		void tofile(){
			tulis_data.open("api_data.txt");
			tulis_data <<bnyk_aymGp<<endl;
			tulis_data <<bnyk_aymGr<<endl;
			tulis_data <<bnyk_udgGr<<endl;
			tulis_data <<bnyk_cmBk<<endl;
			tulis_data <<bnyk_aymBk<<endl;
			tulis_data <<jarak;
			tulis_data.close();
		}

	private:
		ofstream tulis_data;
		int bnyk_aymGp,bnyk_aymGr,bnyk_udgGr,bnyk_cmBk,bnyk_aymBk,jarak;
};