#include <iostream>
using namespace std;

//membuat fungsi
void bilangan (int angka) {
    cout << "Masukkan Angka : ";
    cin >> angka;
    if (angka % 2 == 0) {
    cout << angka << " Adalah Bilangan Genap";
    }
    else {
    cout << angka << " Adalah Bilangan Ganjil";
}
}

int main() {
    
    //memanggil fungsi
   int angka;

   bilangan (angka);

    return 0;
}