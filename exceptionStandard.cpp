#include <iostream>
#include <exception>
//untuk object exception yang akan digunakan
#include <array>
//untuk object array yang akan digunakan
using namespace std;

int main(){
    cout << "Awal Program" << endl; //penanda 1:....
    try {
        array<int, 3> data = {8, 5 , 4};
        //pesan array integer 3
        cout << data.at(3) << endl; 
    }
    catch (exception& e) {
        //penangkap menggunakan object exception
        cout << e.what() << endl;
        //akan dieksekusi karena array daya hanya memiliki 3 element
    }
    cout << "Baris Program Yang Terakhir" << endl;
    //penanda 2:bahwa program berjalan tanpa henti meskipun terjadi kesalahan
    return 0; 
}