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
     if (n <= 1) return false;
     if (n==2 || n==3) return true;
     if (n%2==0 || n%3==0) return false;
     return true;
}