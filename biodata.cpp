#include <iostream>
using namespace std;

//membuat fungsi
void greet (string namaAnda, int umur) {
    cout << "Halo " <<namaAnda << endl;
    cout << "Umur Anda " <<umur;
}

int main() {
    
    //memanggil fungsi
   string nama = "Mila Nur Alwiyyah";
   int umur = 29;
   
   greet (nama, umur);

    return 0;
}