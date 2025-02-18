#include <iostream>
using namespace std;

int ganjil (int n);

int main (){
    int bilangan;
    
    cout << "Masukkan sebuah bilangan : ";
    cin >> bilangan;
    
    if (ganjil(bilangan))
        cout << bilangan << " adalah bilangan ganjil." << endl;
    else
        cout << bilangan << " adalah bilangan genap." << endl;
        
    return 0;
}

int ganjil (int n){
    return (n%2 != 0) ? 1 : 0;
}