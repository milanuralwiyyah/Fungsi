#include <iostream>
using namespace std;

bool kabisat (int tahun);

int main (){
    int tahun;
    
    cout << "Masukkan tahun : ";
    cin >> tahun;
    
    if (kabisat(tahun))
        cout << tahun << " adalah tahun kabisat." << endl;
    else
        cout << tahun << " bukan tahun kabisat." << endl;
        
    return 0;
}

bool kabisat (int tahun){
    return (( tahun % 4 == 0 && tahun % 100!=0) || ( tahun % 400 == 0 ));
}