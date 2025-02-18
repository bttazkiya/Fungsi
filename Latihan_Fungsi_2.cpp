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
// 3. Menampilkan Bilangan Prima menggunakan fungsi
#include <iostream>
using namespace std;

//membuat fungsi 
bool bilangan(int angka){

    cout << "Masukkan Angka: ";
    cin >> angka;
    if(angka==2 || angka==3){
        cout << "Bilangan Prima";
    }
    else if(angka <=1){
        cout << "Bukan Bilangan Prima";
    }
    else if(angka%2==0 || angka%3==0){
        cout << "Bukan Bilangan Prima";
    }
    else{
        cout << "Bilangan Prima";
    }

    return 0;
}
int main (){
    //memanggil fungsi
    int angka;
    bilangan(angka);
    return 0;
}
// 4. Menentukan Tahun Kabisat menggunakan fungsi
#include <iostream>
using namespace std;

bool tahunkabisat(int tahun){
    
    if((tahun % 4 == 0 && tahun % 100 != 0)|| tahun % 400 == 0){
        return true;
    }else{
       return false;
    }
}
int main() {
    int tahun;
    cout << "Masukkan Tahun: ";
    cin >> tahun;

    if (tahunkabisat(tahun)){
        cout << tahun << " adalah tahun kabisat";
    } else {
        cout << tahun << " bukan tahun kabisat";
    }
    return 0;
}
    
    
