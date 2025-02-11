#include <iostream>
using namespace std;

//membuat fungsi
double volumeBalok(double panjang, double lebar, double tinggi){
    return panjang*lebar*tinggi;
}
int main(){
     //memanggil fungsi
    double panjang = 25;
    double lebar = 8;
    double tinggi = 2;
    double v = volumeBalok(panjang,lebar,tinggi);
    cout << "Volume balok adalah " << v << endl;
    return 0;
}