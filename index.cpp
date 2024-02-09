#include <iostream>
#include <string>

using namespace std;

struct Siswa
{
    string nama;
    string jurusan;
    int kelas;
};

enum nama_hari
{
    senin,
    selasa,
    rabu,
    kamis,
    jumat,
    sabtu,
    minggu
};

// fungsi
void say_hello(string nama){
  cout << "Halo, " << nama << endl;
}

int main()
{
    // input dan output
    string nama;
    cout << "siapa nama kamu? " << endl;
    cin >> nama;
    cout << "nama kamu adalah " << nama << endl;

    // komentar
    /*
        komentar
    */

    // variable dan tipe data
    int age = 17;
    float ipk = 13.89;
    double phi = 14.7;
    bool betul = true;
    char score = 'A';
    string jurusan = "rpl";
    string names[] = {"amel", "imel", "umel", "emel", "omel"};

    // tipe data pointer
    string &jurusan2 = jurusan;

    // tipe data struct
    struct Siswa siswa1, siswa2, siswa3;

    siswa1.nama = "amel";
    siswa1.jurusan = "rpl";
    siswa1.kelas = 11;

    siswa2.nama = "imel";
    siswa2.jurusan = "tkj";
    siswa2.kelas = 12;

    siswa3.nama = "umel";
    siswa3.jurusan = "dkv";
    siswa3.kelas = 10;

    // tipe data enum
    nama_hari hari1;
    hari1 = senin;
    hari1 = minggu;


    // operasi aritmatika
    int bil1 = 17;
    int bil2 = 8;
    cout << bil1 + bil2 << endl;
    cout << bil1 - bil2 << endl;
    cout << bil1 * bil2 << endl;
    cout << bil1 / bil2 << endl;
    cout << bil1 % bil2 << endl;
    cout << bil1++ << endl;
    cout << ++bil1 << endl;
    cout << bil1-- << endl;
    cout << --bil1 << endl;

    // operasi pembanding
    bool benar = true;
    bool salah = false;
    bool operasi_and = benar && benar;
    bool operasi_or = benar || salah;
    bool operasi_not = !salah;

    cout << operasi_and << endl;
    cout << operasi_or << endl;
    cout << operasi_not << endl;

    // operator percabangan
      string name = "Amel";

    if (name == "amel") {
        cout << "pasti nama kamu amel" << endl;
    } else if (name == "Amel") {
        cout << "pasti nama kamu Amel" << endl;
    } else {
        cout << "pasti nama kamu bukan amel" << endl;
    }

    char nilai = 'A';
    switch (nilai) {
       case 'A':
        cout << "anda lulus dengan sangat baik" << endl;
        break;
    case 'B':
    case 'C':
        cout << "anda lulus" << endl;
        break;
    case 'D':
        cout << "maaf, anda tidak lulus" << endl;
        break;
        default:
            cout << "mungkin anda salah jurusan" << endl;
    }

    // perulangan
    for (int i = 0; i <= 100; i += 50) {
        cout << i << endl;
    }
    for (string nama : names){
        cout << nama << endl;
    }
    
    int i = 0;
    while (i <= 50) {
        cout << i << endl;
        i += 25;
    }
    do {
        cout << i << endl;
        i++;
    } while (i <= 100);

    // fungsi
    say_hello("amel");
}
