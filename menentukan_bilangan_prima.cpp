#include <iostream>
using namespace std;

//membuat fungsi
bool bilangan (int n) {

 if (n <= 1) return false;
 if (n==2 || n==3) return true;
 if (n%2==0 || n%3==0) return false;
 return true;
}

int main() {
   int n;
    cout << "Masukkan Bilangan : ";
    cin >> n;

if (bilangan(n)) {
    cout << n << " Adalah Bilangan Prima" << endl;
} else {
    cout << n << " Bukan Bilangan Prima" << endl;
}
return 0;
}