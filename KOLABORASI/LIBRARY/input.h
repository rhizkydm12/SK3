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
    		cout<< "Masukkan Pilihan Menu : "; cin >> menu;
    		cout<< "Jumlah menu yang dipesan : ";cin >> jumlah;
		}

		void tofile(){
			tulis_data.open("../pra_data/input.txt");
			tulis_data << menu <<endl;
			tulis_data << jumlah;
			tulis_data.close();
		}

	private:
		ofstream tulis_data;
		int menu, jumlah; 
};