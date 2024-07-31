#include <iostream>
using namespace std;

void cetakdata(string nama, string nisn, string jurusan, string tinggibadan) {
    cout << "Nama: " << nama << endl;
    cout << "NISN: " << nisn << endl;
    cout << "Jurusan: " << jurusan << endl;
    cout << "Tinggi Badan: " << tinggibadan << endl;
}

int main() {
    string nama = "Naufal Galang Saputra";
    string nisn = "0086572306";
    string jurusan = "PPLG";
    string tinggibadan = "172";
    
    cetakdata(nama, nisn, jurusan, tinggibadan);
    

    return 0;

}