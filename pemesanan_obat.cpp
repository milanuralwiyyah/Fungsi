#include <iostream>
using namespace std;

int main() {
    int jumlahObat;
    cout << "Masukkan jumlah jenis obat yang ingin dibeli : ";
    cin >> jumlahObat;

    string nama[jumlahObat];
    int harga[jumlahObat], jumlah[jumlahObat], totalBiaya = 0;

    for (int i = 0; i < jumlahObat; i++) {
        cout << "\nMasukkan nama obat ke-" << i + 1 << " : ";
        cin >> nama[i];
        cout << "Masukkan harga per satuan : ";
        cin >> harga[i];
        cout << "Masukkan jumlah yang dibeli : ";
        cin >> jumlah[i];
    }

    cout << "\nDaftar Pesanan :\n";
    for (int i = 0; i < jumlahObat; i++) {
        int total = harga[i] * jumlah[i];
        totalBiaya += total;
        cout << i + 1 << ". " << nama[i] << " " << jumlah[i] << " x " << harga[i] << " = Rp " << total << endl;
    }
    cout << "Total biaya keseluruhan adalah : Rp " << totalBiaya << endl;

    return 0;
}