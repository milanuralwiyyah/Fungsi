#include <iostream>
using namespace std;

//membuat fungsi
bool bilangan (int nilai) {
    cout << "Masukkan Nilai : ";
    cin >> nilai;
    
    if (nilai >= 85 && nilai <=100) {
        cout << "Nilai Predikat : A" << endl;
    }  else if (nilai >= 70 && nilai <= 84) {
        cout << "Nilai Predikat : B" << endl;
    } else if (nilai >= 55 && nilai <= 69) {
        cout << "Nilai Predikat : C" << endl;
    } else if (nilai >= 40 && nilai <= 54) {
        cout << "Nilai Predikat : D" << endl;
    } else if (nilai < 40) {
        cout << "Nilai Predikat : E" << endl;    
    } else {
        cout << "Ptrdikat Tidak Valid" << endl;
}
return true;
}

int main () {
    int nilai;
    
// Memanggil Fungsi
bilangan (nilai);

return 0;
}