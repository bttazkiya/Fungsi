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