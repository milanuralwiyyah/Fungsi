#include <iostream>
using namespace std;

//membuat fungsi
void luasPersegi (int panjang, int lebar) {
    double luasPersegi = panjang*lebar;
    double kelilingPersegi = 2*(panjang+lebar);
    cout << "Panjang " <<panjang<< endl;
    cout << "Lebar " <<lebar << endl;
    cout << "Luas Persegi :" <<luasPersegi << endl;
    cout << "Keliling Persegi :" <<kelilingPersegi;
}

int main() {
    
    //memanggil fungsi
   int panjang = 10;
   int lebar = 5;
   
   luasPersegi (panjang, lebar);

    return 0;
}