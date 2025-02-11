#include <iostream>
using namespace std;

double faktorial (int angka){

    long hasil = 1;
    for (int i = 2; i <= angka; i++){
        hasil *= i;
    }
    return hasil;
}

int main (){
    int angka;
cout << "Masukkan angka: ";
    cin >> angka;

int f = faktorial (angka);
cout << "Bilangan faktorial dari " << angka << " adalah " << f;

return 0;
}