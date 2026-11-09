
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
        cout<< "| SET MA LAMPIR'S STORE ITEM PRICES |" << endl;
        cout<< "*-----------------------------------*" << endl;
        cout<< "- Choose the item you want to reprice." << endl;
        cout<< "- Cheetos[1]" << endl;
        cout<< "- Soda[2]" << endl;
        cout<< "- Exit[3]" << endl;
        cout<< "> ";
        cin>> inputClass;
        cout<< endl;
        if (inputClass == 1) {
            cout<< "Initial price : " << cheetos << endl;
            cout<< "Set cheetos price : ";
            cin>> cheetos;
            cout<< endl;
            cout<< "Back to price editing main menu[1]" << endl;
            cin>> inputClass2;
            if (inputClass2 == 1) {
                continue;
            }
            else {
                do {
                  cout<< "invalid input!! input again." << endl;
                  cout<< ">";
                  cin>> inputClass2;
                } while (inputClass2 != 1);
            }
            
        }
        else if (inputClass == 2) {
            cout<< "Initial price : " << soda << endl;
            cout<< "Set soda price : ";
            cin>> soda;
            cout<< endl;
            cout<< "Back to price editing main menu[1]" << endl;
            cin>> inputClass2;
            if (inputClass2 == 1) {
                continue;
            }
            else {
                do {
                  cout<< "invalid input!! input again." << endl;
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
            cout<< "invalid input!! input again." << endl;
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
    cout<< "| WELCOME TO MA LAMPIR'S STORE           |" << endl;
    cout<< "*----------------------------------------*" << endl;
    cout<< "| (option 1) : "; if (pegawai == 1) { cout<< "Become employee & extra info|" << endl; } else if (pegawai == 2 || pegawai == 0) { cout<< "become an employee          |" << endl; } else { cout<< "Change prices               |" << endl; }
    cout<< "| (option 2) : Shop                      |" << endl;
    cout<< "| (option 3) : exit                      |" << endl;
    cout<< "*----------------------------------------*" << endl;
    cout<< "> ";
    cin>> input;
    
    if (input == 1) {
        
        if (pegawai == 3) {
            player.Ppegawai(pegawai);
        }
        
        else if (pegawai == 1) {
            cout<< "-------------------------------------------------------------------------------------------------------" << endl;
            cout<< "| WELCOME TO MA LAMPIR'S SHOP AS AN EMPLOYEE! - MA LAMPIR'S SHOP NGAWI BRANCH                          |" << endl;
            cout<< "-------------------------------------------------------------------------------------------------------" << endl;
            cout<< "| Welcome to Mak Lampir's shop, player! Starting today, you are officially part of the squad.           |" << endl;
            cout<< "| This shop is small, but we have many loyal customers because of our friendly service                  |" << endl; 
            cout<< "| and top-tier cleanliness. I hope you feel at home working here.                                     |" << endl;
            cout<< "| Don't hesitate to ask me or the other crew members if anything is confusing, alright?                 |" << endl;
            cout<< "| Let's work together real good!.                                                                     |" << endl;
            cout<< "|                                                                                                     |" << endl;
            cout<< "| Now, Player!                                                                                        |" << endl;;
            cout<< "| Regarding salary, at our shop we use the 'sincere hearts, blessed returns' system.                  |" << endl;
            cout<< "| Since our shop's finances go up and down like a roller coaster,                                     |" << endl;
            cout<< "| every end of the month I'll hand you an envelope depending on                                       |" << endl;
            cout<< "| the shop's profit and my sincerity as a manager.                                                    |" << endl;
            cout<< "-------------------------------------------------------------------------------------------------------" << endl;
            cout<< "- Accept as permanent employee[1]" << endl;
            cout<< "- Reject and remain unemployed[2]" << endl;
            cin>> input;
            if (input == 1) {
                pegawai = 3;
                continue;
            }
            else if (input == 2) {
                pegawai = 2;
                cout<< "*we respect your life choices bro" << endl;
            }
            else {
                pegawai = 3;
                do {
                  cout<< "invalid input!! input again." << endl;
                  cout<< ">";
                  cin>> input;
                } while (input != 1);
            }
            
        }
        else if (pegawai == 2 || pegawai == 0) {
        cout<< " ------------------------------------" << endl;
        cout<< " |ADMINISTRATIVE REQUIREMENTS (CV)  |" << endl;
        cout<< " ------------------------------------" << endl;
        cout<< "- Job application letter (CV)" << endl;
        cout<< "- Graduated from UGM PhD in Economics" << endl;
        cout<< "- Good looking / Attractive appearance" << endl;
        cout<< cin.ignore();
        cout<< " - Do these requirements match your profile?" << endl;
        getline(cin, input1);
        if (input1.find("Iya") != string::npos || input1.find("iya") != string::npos || input1.find("yes") != string::npos || input1.find("ya") != string::npos || input1.find("Yeah") != string::npos || input1.find("yep") != string::npos) {
            cout<< "CONGRATS! YOU PASSED AS AN EMPLOYEE" << endl;
            cout<< "Back to main menu [1]" << endl;
            cout<< ">";
            pegawai = 1;
            cin>> input;
            if (input == 1) {
                continue;
            }
            else {
                do {
                  cout<< "invalid input!! input again." << endl;
                  cout<< ">";
                  cin>> input;
                } while (input != 1);
            }
        }
        
        else if (input1.find("Tidak") != string::npos || input1.find("tidak") != string::npos || input1.find("no") != string::npos || input1.find("nah") != string::npos) {
            cout<< "SORRY. YOU DID NOT PASS AS AN EMPLOYEE" << endl;
            cout<< "Back to main menu [1]" << endl;
            cout<< ">";
            pegawai = 0;
            cin>> input;
            if (input == 1) {
                continue;
            }
            else {
                do {
                  cout<< "invalid input!! input again." << endl;
                  cout<< ">";
                  cin>> input;
                } while (input != 1);
            }
        }
        
        }
    }
    else if (input == 2) {
    cout<< "*---------------------------------------*" << endl;
    cout<< "| Cheetos Stock : " << player.jumlahCheetos << "                  |" << endl;
    cout<< "| Soda Stock : " << player.jumlahSoda << "                     |" << endl;
    cout<< "*---------------------------------------*" << endl;
    cout<< "*---------------------------------------*" << endl;
    cout<< "| WELCOME TO THE SHOPPING MENU          |" << endl;
    cout<< "*---------------------------------------*" << endl;
    cout<< "| - select item you want to buy         |" << endl;
    cout<< "|   Cheetos(" << player.cheetos << ")                   |" << endl;
    cout<< "|   Soda(" << player.soda << ")                       |" << endl;
    cout<< "*---------------------------------------*" << endl;
    cout<< "> ";
    cin>> input1;
    if (input1 == "Cheetos" || input1 == "cheetos") {
        cout<< "How many Cheetos do you want to buy : ";
        cin>> inputjumlah;
        int hasilCek = jumlahCheetosCheck(&inputjumlah,&player);
        if (hasilCek == 2) {
            cout<< "Sorry bro, the cheetos you want to buy exceeds our stock.." << endl;
            cout<< "back to menu[1]" << endl;
            cin>> input;
            if (input == 1) {
                continue;
            }
            else {
                while (input != 1) {
                    cout<< "Invalid input!" << endl;
                    cout<< ">";
                    cin>> input;
                }
            }
        }
        else {
          cout<< " *************************" << endl;
          cout<< " | PAYMENT SUCCESSFUL!!  |" << endl;
          cout<< " *************************" << endl;
          cout<< " - Total payment = " << player.cheetos * inputjumlah << endl;
          cout<< " - item : Cheetos x" << inputjumlah << endl;
          cout<< " - remaining cheetos stock : " << player.jumlahCheetos << endl;
          cout<< " - back to main menu[1]" << endl;
          cin>> input;
           if (input == 1) {
                continue;
            }
            else {
                while (input != 1) {
                    cout<< "Invalid input!" << endl;
                    cout<< ">";
                    cin>> input;
                }
            }
        }
        
    }
    else if (input1 == "Soda" || input1 == "soda") {
        cout<< "How many Soda do you want to buy? : ";
        cin>> inputjumlah;
        int hasilCek = jumlahSodaCheck(&inputjumlah, &player);
        if (hasilCek == 1) {
          cout<< " *************************" << endl;
          cout<< " | PAYMENT SUCCESSFUL!!  |" << endl;
          cout<< " *************************" << endl;
          cout<< " - Total payment = " << player.soda * inputjumlah << endl;
          cout<< " - item : Soda x" << inputjumlah << endl;
          cout<< " - remaining soda stock : " << player.jumlahSoda << endl;
          cout<< " - back to main menu[1]" << endl;
          cin>> input;
           if (input == 1) {
                continue;
            }
            else {
                while (input != 1) {
                    cout<< "Invalid input!" << endl;
                    cout<< ">";
                    cin>> input;
                }
            }
        }
        else {
            cout<< "Sorry bro, the Soda you want to buy exceeds our stock.." << endl;
            cout<< "back to menu[1]" << endl;
            cin>> input;
            if (input == 1) {
                continue;
            }
            else {
                while (input != 1) {
                    cout<< "Invalid input!" << endl;
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
