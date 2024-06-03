#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;

    ofstream outfile;

    outfile.open("ContohFile.txt");

    cout << "=> Menulis file, \'q\' untuk keluar" << endl;

    while (true) 
    {
        cout << "_ ";

        getline(cin, baris);

        if (baris == "q") {
            break;
        }
        outfile << baris << endl;
    }
    
    outfile.close();
    
}