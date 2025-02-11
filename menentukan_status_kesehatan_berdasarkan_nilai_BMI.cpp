#include <iostream>
using namespace std;
double bmi(double bb,double tb ){
    double tt = tb * tb;
    return bb / tt ;
}
int main(){
    double berat,tinggi,bm;
    string status;
    cout << "masukan berat badan : ";
    cin>> berat;
    cout << "masukan tinggi badan(M) : ";
    cin>> tinggi;
    bm = bmi(berat,tinggi);
    if(bm < 18.5){
        status = " Kurus";
    }else if(bm >= 18.5){
        status = " Normal";
    }else if(bm >= 25){
        status = " Gemuk";
    }else {
        status = " Obesitas";
    }
    cout << "berat badan anda adalah " << berat << "\ntinggi badan anda adalah " << tinggi << "\nBMI anda adalah " << bm << "\nStatus kesehatan anda adalah " << status;
    return 0;
}