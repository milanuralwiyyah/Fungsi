#include <iostream>
using namespace std;

int main() {
    string hari[] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Ahad"};
    int suhu[7], suhuTertinggi, suhuTerendah;
    string hariTertinggi, hariTerendah;

for (int i = 0; i < 7; i++) {
    cout << "Masukkan suhu hari " << hari[i] << " : ";
    cin >> suhu[i];
    if (i == 0 || suhu[i] > suhuTertinggi) {
        suhuTertinggi = suhu[i];
        hariTertinggi = hari[i];
    }
    if (i == 0 || suhu[i] < suhuTerendah) {
        suhuTerendah = suhu[i];
        hariTerendah = hari[i];
    }
}

cout << "\nSuhu tertinggi dalam seminggu : " << suhuTertinggi << "°C (" << hariTertinggi << ")" << endl;
cout << "Suhu terendah dalam seminggu : " << suhuTerendah << "°C (" << hariTerendah << ")" << endl;

return 0;
}