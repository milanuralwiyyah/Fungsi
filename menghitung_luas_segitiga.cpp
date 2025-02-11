#include <iostream>
using namespace std;

//membuat fungsi
double luasSegitiga (int alas, int tinggi) {
    return 0.5*alas*tinggi;
}

int main() {
   int alas = 10;
   int tinggi = 20;
   
// Memanggil fungsi   
  double luas = luasSegitiga (alas, tinggi);
  cout << "Luas Segitiga : " << luas;
}