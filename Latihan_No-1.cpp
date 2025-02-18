// 1. Menampilkan pilihan menu menggunakan fungsi
#include <iostream>
using namespace std;

void menu();

int main() {
    int n;

    // Meminta input jumlah perulangan dari user
    cout << "Masukkan jumlah perulangan: ";
    cin >> n;

    // Memanggil fungsi secara berulang
    for(int i = 0; i < n; i++){
        menu(); // Memanggil fungsi menu()
    }
    return 0;
}
// Menampilkan pilihan menu
void menu(){
    cout << "Pilihan Menu" << endl;
}