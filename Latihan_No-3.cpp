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