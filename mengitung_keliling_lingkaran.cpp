#include <iostream>
using namespace std;
//membuat fungsi
double kelilingLingkaran(double phi, double jarijari){
    return 2*phi*jarijari;
}
int main(){
    //memanggil fungsi
    double phi = 3.14;
    double jarijari = 6;
    double k = kelilingLingkaran(phi,jarijari);
    cout << "Kelling Lingkaran adalah " << k << endl;
    return 0;
}