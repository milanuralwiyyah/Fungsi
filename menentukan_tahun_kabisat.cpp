#include <iostream>//menentukan tahun kabisat menggunakan fungsi
using namespace std;

double tahun (int angka){
    cout << "Masukkan tahun: ";
    cin >> angka;

    if (( angka % 4 == 0 && angka % 100!=0) || ( angka % 400 == 0 )) {
        cout << "Tahun Kabisat";
    }
    else { 
        cout << "Bukan Tahun Kabisat";
    }
    return 0;
}

int main(){
    int angka;
    tahun (angka);

    return 0;
}