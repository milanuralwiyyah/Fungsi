#include <iostream>
using namespace std;

//Membuat Fungsi
void konversi (int suhu) {
    float fahrenheit = (suhu * 9.0 / 5.0) + 32;
    float celcius = (suhu - 32) *5.0/9;
    cout<<"Suhu Dalam Fahrenheit : " << fahrenheit << "°F" << endl;
    cout<<"Suhu Dalam Celcius : " << celcius << "°C";
}

int main() {
//Memanggil Fungsi
int suhu = 37;
   
   konversi (suhu);

    return 0;
}