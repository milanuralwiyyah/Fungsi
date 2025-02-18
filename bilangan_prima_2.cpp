#include <iostream>
using namespace std;

int prima (int n);

int main (){
    int bilangan;
    
    cout << "Masukkan sebuah bilangan : ";
    cin >> bilangan;
    
    if (prima(bilangan))
        cout << bilangan << " adalah bilangan prima." << endl;
    else
        cout << bilangan << " bukan bilangan prima." << endl;
        
    return 0;
}

int prima (int n){
    if (n <= 2) return 0;
    for (int i=2; i*i <=n; i++){
    if (n%i==0) return 0;
    }
     return 1;
}