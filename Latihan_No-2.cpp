// 2. Menentukan bilangan ganjil menggunakan fungsi
#include <iostream>
using namespace std;

int ganjil(int n);

int main() {
    int bilangan;

    cout << "Masukkan Sebuah Bilangan: ";
    cin >> bilangan;

    // Memanggil fungsi ganjil() dan menampilkan hasilnya
    if(ganjil(bilangan))
        cout << bilangan << " adalah Bilangan Ganjil" << endl;
    else 
        cout << bilangan << " adalah Bilangan Genap" << endl;

    return 0;
}

// Definisi fungsi ganjil
int ganjil(int n){
    return (n % 2 != 0) ? 1 : 0;
}