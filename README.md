# Digital_store_C-
//A beginner-friendly C++ console application implementing Object-Oriented Programming (OOP), //pointers, and robust input validation for a virtual store simulator.

#include <iostream>
using namespace std;
int inputClass;
int inputClass2;


class toko {
    private :
    bool bang = true;
    void pegawai() {
        do {
        cout<< "*-----------------------------------*" << endl;
        cout<< "| ATUR HARGA BARANG TOKO MAK LAMPIR |" << endl;
        cout<< "*-----------------------------------*" << endl;
        cout<< "- Pilih barang yang mau diatur harganya." << endl;
        cout<< "- Cheetos[1]" << endl;
        cout<< "- Soda[2]" << endl;
        cout<< "- Keluar[3]" << endl;
        cout<< "> ";
        cin>> inputClass;
        cout<< endl;
        if (inputClass == 1) {
            cout<< "Harga awal : " << cheetos << endl;
            cout<< "Atur harga cheetos : ";
            cin>> cheetos;
            cout<< endl;
            cout<< "Balik ke menu utama ubah harga[1]" << endl;
            cin>> inputClass2;
            if (inputClass2 == 1) {
                continue;
            }
            else {
                do {
                  cout<< "input invalid!! input kembali." << endl;
                  cout<< ">";
                  cin>> inputClass2;
                } while (inputClass2 != 1);
            }
            
        }
        else if (inputClass == 2) {
            cout<< "Harga awal : " << soda << endl;
            cout<< "Atur harga soda : ";
            cin>> soda;
            cout<< endl;
            cout<< "Balik ke menu utama ubah harga[1]" << endl;
            cin>> inputClass2;
            if (inputClass2 == 1) {
                continue;
            }
            else {
                do {
                  cout<< "input invalid!! input kembali." << endl;
                  cout<< ">";
                  cin>> inputClass2;
                } while (inputClass2 != 1);
            }
            
        }
        else if (inputClass == 3) {
            bang = false;
        }
        else {
            do {
            cout<< "input invalid!! input kembali." << endl;
            cout<< ">";
            cin>> inputClass;
            } while (inputClass != 1);
        }
        } while (bang);
    }
    
    public :
    int jumlahSoda = 5;
    int jumlahCheetos = 8;
    int soda = 8000;
    int cheetos = 12000;
    
    int Ppegawai(int Vpengecekan) {
        if (Vpengecekan == 3) {
            pegawai();
        }
        else {
            return 0;
        }
        return 1;
    }
};
   int jumlahSodaCheck(int *inputJumlah1,toko *jumlahSoda2) {
   if (*inputJumlah1 <= (*jumlahSoda2).jumlahSoda) {
      (*jumlahSoda2).jumlahSoda = (*jumlahSoda2).jumlahSoda - *inputJumlah1;
      return 1;
   }
   else {
       return 2;
   }
}
int jumlahCheetosCheck(int *inputJumlah1,toko *jumlahcheetos2) {
   if (*inputJumlah1 <= (*jumlahcheetos2).jumlahCheetos) {
      (*jumlahcheetos2).jumlahCheetos = (*jumlahcheetos2).jumlahCheetos - *inputJumlah1;
      return 1;
   }
   else {
       return 2;
   }
}

int main()
{
   
    int inputjumlah;
    int jumlahbelanjaan;
    bool loop = true;
    int pegawai = 2;
    toko player;
    int input;
    string input1;
    
    do {
    cout<< "*----------------------------------------*" << endl;
    cout<< "| SELAMAT DATANG DI TOKO MAK LAMPIR      |" << endl;
    cout<< "*----------------------------------------*" << endl;
    cout<< "| (opsi 1) : "; if (pegawai == 1) { cout<< "Jadi pegawai & info lebih   |" << endl; } else if (pegawai == 2 || pegawai == 0) { cout<< "jadi pegawai                |" << endl; } else { cout<< "Ubah harga                  |" << endl; }
    cout<< "| (opsi 2) : Belanja                     |" << endl;
    cout<< "| (opsi 3) : keluar                      |" << endl;
    cout<< "*----------------------------------------*" << endl;
    cout<< "> ";
    cin>> input;
    
    if (input == 1) {
        
        if (pegawai == 3) {
            player.Ppegawai(pegawai);
        }
        
        else if (pegawai == 1) {
            cout<< "-------------------------------------------------------------------------------------------------------" << endl;
            cout<< "| SELAMAT DATANG DI WARUNG MAK LAMPIR SEBAGAI PEGAWAI! - WARUNG MAK LAMPIR CABANG NGAWI               |" << endl;
            cout<< "-------------------------------------------------------------------------------------------------------" << endl;
            cout<< "| Selamat datang di warung Mak lampir, player! Mulai hari ini kamu resmi jadi bagian dari tim.        |" << endl;
            cout<< "| Warung ini kecil, tapi kita punya banyak pelanggan setia karena pelayanan kita yang                 |" << endl; 
            cout<< "| ramah dan kebersihan yang terjaga. Saya berharap kamu bisa betah kerja di sini.                     |" << endl;
            cout<< "| Jangan ragu buat tanya ke saya atau teman-teman lain kalau ada yang belum paham, ya                 |" << endl;
            cout<< "| Mari kita kerja sama dengan baik!.                                                                  |" << endl;
            cout<< "|                                                                                                     |" << endl;
            cout<< "| Nah, Player!                                                                                        |" << endl;;
            cout<< "| untuk urusan gaji, di warung kita ini pakai sistem keikhlasan berbalas berkah.                      |" << endl;
            cout<< "| Karena keuangan warung kita masih naik-turun seperti roller coaster,                                |" << endl;
            cout<< "| setiap akhir bulan saya akan kasih amplop yang jumlahnya tergantung                                 |" << endl;
            cout<< "| keuntungan warung dan keikhlasan saya sebagai manajer.                                              |" << endl;
            cout<< "-------------------------------------------------------------------------------------------------------" << endl;
            cout<< "- Terima sebagai pegawai tetap[1]" << endl;
            cout<< "- Tolak dan tetap sebagai pengganguran[2]" << endl;
            cin>> input;
            if (input == 1) {
                pegawai = 3;
                continue;
            }
            else if (input == 2) {
                pegawai = 2;
                cout<< "*kami hargai keputusan anda" << endl;
            }
            else {
                pegawai = 3;
                do {
                  cout<< "input invalid!! input kembali." << endl;
                  cout<< ">";
                  cin>> input;
                } while (input != 1);
            }
            
        }
        else if (pegawai == 2 || pegawai == 0) {
        cout<< " ------------------------------------" << endl;
        cout<< " |PERSYARATAN ADMINISTRASI (DOKUMEN)|" << endl;
        cout<< " ------------------------------------" << endl;
        cout<< "- Surat lamaran pekerjaan (CV)" << endl;
        cout<< "- Lulusan UGM S3 ekonomi      " << endl;
        cout<< "- Berpenampilan menarik       " << endl;
        cin.ignore();
        cout<< " - Apakah persyaratan sudah sesuai dengan anda?" << endl;
        getline(cin, input1);
        if (input1.find("Iya") != string::npos || input1.find("iya") != string::npos || input1.find("yes") != string::npos || input1.find("ya") != string::npos ) {
            cout<< "SELAMAT! ANDA LULUS SEBAGAI PEGAWAI" << endl;
            cout<< "Balik ke menu utama [1]" << endl;
            cout<< ">";
            pegawai = 1;
            cin>> input;
            if (input == 1) {
                continue;
            }
            else {
                do {
                  cout<< "input invalid!! input kembali." << endl;
                  cout<< ">";
                  cin>> input;
                } while (input != 1);
            }
        }
        
        else if (input1.find("Tidak") != string::npos || input1.find("tidak") != string::npos || input1.find("no") != string::npos) {
            cout<< "MAAF. ANDA TIDAK LULUS SEBAGAI PEGAWAI" << endl;
            cout<< "Balik ke menu utama [1]" << endl;
            cout<< ">";
            pegawai = 0;
            cin>> input;
            if (input == 1) {
                continue;
            }
            else {
                do {
                  cout<< "input invalid!! input kembali." << endl;
                  cout<< ">";
                  cin>> input;
                } while (input != 1);
            }
        }
        
        }
    }
    else if (input == 2) {
    cout<< "*---------------------------------------*" << endl;
    cout<< "| Stok Cheetos : " << player.jumlahCheetos << "                      |" << endl;
    cout<< "| Stok Soda : " << player.jumlahSoda << "                         |" << endl;
    cout<< "*---------------------------------------*" << endl;
    cout<< "*---------------------------------------*" << endl;
    cout<< "| SELAMAT DATANG DI MENU PENJUALAN      |" << endl;
    cout<< "*---------------------------------------*" << endl;
    cout<< "| - pilih barang yang ingin dibeli      |" << endl;
    cout<< "|   Cheetos(" << player.cheetos << ")                      |" << endl;
    cout<< "|   Soda(" << player.soda << ")                          |" << endl;
    cout<< "*---------------------------------------*" << endl;
    cout<< "> ";
    cin>> input1;
    if (input1 == "Cheetos") {
        cout<< "Berapa jumlah Cheetos yang ingin dibeli : ";
        cin>> inputjumlah;
        int hasilCek = jumlahCheetosCheck(&inputjumlah,&player);
        if (hasilCek == 2) {
            cout<< "Maaf, cheeots yang anda beli tidak mencukupi stok.." << endl;
            cout<< "balik ke menu[1]" << endl;
            cin>> input;
            if (input == 1) {
                continue;
            }
            else {
                while (!input == 1) {
                    cout<< "Input invalid!" << endl;
                    cout<< ">";
                    cin>> input;
                }
            }
        }
        else {
          cout<< " *************************" << endl;
          cout<< " | PEMBAYARAN BERHASIL!! |" << endl;
          cout<< " *************************" << endl;
          cout<< " - Total pembayaran = " << player.cheetos * inputjumlah << endl;
          cout<< " - barang : Cheetos x" << inputjumlah << endl;
          cout<< " - sisa stok cheetos : " << player.jumlahCheetos << endl;
          cout<< " - balik ke menu utama[1]" << endl;
          cin>> input;
           if (input == 1) {
                continue;
            }
            else {
                while (!input == 1) {
                    cout<< "Input invalid!" << endl;
                    cout<< ">";
                    cin>> input;
                }
            }
        }
        
    }
    else if (input1 == "Soda") {
        cout<< "Berapa jumlah Soda yang ingin dibeli? : ";
        cin>> inputjumlah;
        int hasilCek = jumlahSodaCheck(&inputjumlah, &player);
        if (hasilCek == 1) {
          cout<< " *************************" << endl;
          cout<< " | PEMBAYARAN BERHASIL!! |" << endl;
          cout<< " *************************" << endl;
          cout<< " - Total pembayaran = " << player.soda * inputjumlah << endl;
          cout<< " - barang : Cheetos x" << inputjumlah << endl;
          cout<< " - sisa stok cheetos : " << player.jumlahSoda << endl;
          cout<< " - balik ke menu utama[1]" << endl;
          cin>> input;
           if (input == 1) {
                continue;
            }
            else {
                while (!input == 1) {
                    cout<< "Input invalid!" << endl;
                    cout<< ">";
                    cin>> input;
                }
            }
        }
        else {
            cout<< "Maaf, Soda yang anda beli tidak mencukupi stok.." << endl;
            cout<< "balik ke menu[1]" << endl;
            cin>> input;
            if (input == 1) {
                continue;
            }
            else {
                while (!input == 1) {
                    cout<< "Input invalid!" << endl;
                    cout<< ">";
                    cin>> input;
                }
            }
        }
    }
    }
    else if (input == 3) {
        loop = false;
    }
    } while (loop);
    return 0;
}
