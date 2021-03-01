#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
void tampilData(){

    int n, ln=4;

    dataPembeli();
    dataBarang();

    cout << "Data Pembeli\n";
    gotoxy(0,1); strip(30);
    gotoxy(50, 1); strip(30);
    gotoxy(0,2); cout << "Kode_pbl";
    gotoxy(10,2); cout << "Status";
    gotoxy(20,2); cout << "Nama" ;

    gotoxy(50,0); cout << "Data Barang\n";

    gotoxy(0,3); strip(30);
    gotoxy(50,3); strip(30);

    gotoxy(50,2); cout << "Kode_brg";
    gotoxy(60,2); cout << "Nama_brg";
    gotoxy(74,2); cout << "Harga" ;


    for (n = 0; n<5; n++){
        gotoxy(0,ln); cout << pembeli[n].kode_pbl;
        gotoxy(10,ln); cout << pembeli[n].status;
        gotoxy(20,ln); cout << pembeli[n].nama;
        gotoxy(50,ln); cout << barang[n].kode_brg;
        gotoxy(60,ln); cout << barang[n].nama_brg;
        gotoxy(74,ln); cout << barang[n].harga;
        ln++;
    }

    gotoxy(0,9); strip(30);
    gotoxy(50,9); strip(30);

}
