#include <iostream>
using namespace std;

//membuat fungsi
void luas (int alas, int tinggi) {
    double luasSegitiga = 0.5*alas*tinggi;
    cout << "Alas " <<alas << endl;
    cout << "Tinggi " <<tinggi << endl;
    cout << "Luas Segitiga " <<luasSegitiga;
}

int main() {
    
    //memanggil fungsi
   int alas = 10;
   int tinggi = 5;
   
   luas (alas, tinggi);

    return 0;
}