using namespace std;

class proses {
	public :
		void getData(){
			ambil_data.open("api_data.txt");
      while(!ambil_data.eof()){
          ambil_data >> bnyk_aymGp;
          ambil_data >> bnyk_aymGr;
          ambil_data >> bnyk_udgGr;
          ambil_data >> bnyk_cmBk;   
          ambil_data >> bnyk_aymBk;
      }
			ambil_data.close();
		}

		void toFile(){
			int total =(hrg_aymGp * bnyk_aymGp) + (hrg_aymGr * bnyk_aymGr) + (hrg_udgGr * bnyk_udgGr) + (hrg_cmBk * bnyk_cmBk) + (hrg_aymBk * bnyk_aymBk);
			if(jarak <= 3){
					ongkir = 15000;
			} else if(jarak > 3){
    				ongkir = 25000;
    		}

			float t2 = float(total);
			if(t2 > 25000){
				ongkir = ongkir - 3000;
    			hargaFinal = ongkir + t2;
  			}else if(t2 > 50000) {
    			ongkir = ongkir - 5000;
    			hargaFinal = ongkir + t2 - (t2 * 0.15);
 			  }else if(t2 > 150000){
    			ongkir = ongkir - 8000;
    			hargaFinal = ongkir + t2 - (t2 * 0.35);
    		}


			tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << ongkir << endl;
			tulis_data << hargaFinal << endl;
			tulis_data <<bnyk_aymGp<<endl;
			tulis_data <<bnyk_aymGr<<endl;
			tulis_data <<bnyk_udgGr<<endl;
			tulis_data <<bnyk_cmBk<<endl;
			tulis_data <<bnyk_aymBk;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
    int bnyk_aymGp;
    int bnyk_aymGr;
    int bnyk_udgGr;
    int bnyk_cmBk;
    int bnyk_aymBk;
		int hrg_aymGp = 21000;
		int hrg_aymGr = 17000;
		int hrg_udgGr = 19000;
		int hrg_cmBk = 20000;
		int hrg_aymBk = 25000;
    int hargaFinal, ongkir, jarak;
};
	
