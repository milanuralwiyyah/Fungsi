#include <iostream>
using namespace std;

int jumlahGenap(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { 
            total += arr[i];
        }
    }
    return total;
}

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    
    int arr[n];
    cout << "Masukkan " << n << " angka: \n";
    
    for (int i = 0; i < n; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
    
    int totalGenap = jumlahGenap(arr, n);
    
    cout << "Jumlah angka genap adalah: " << totalGenap << endl;
    
    return 0;
}