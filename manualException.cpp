#include <iostream>
using namespace std;

int main(){
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        //throw 0.5 ; //melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a){
        //blok ini akan dieksekusi
        cout << "Pengeculan akan dieksekusi" << endl;
    }
    catch (...) {
        //jika selain integer makan blok ini akan dieksekusi
        cout << "Default pengecualian dieksekusi" << endl;
    }
    return 0;
}