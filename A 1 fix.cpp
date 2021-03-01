#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct pbl
{
    string kode_pbl, status, nama;
} pembeli[5];

struct brg
{
    string kode_brg, nama_brg;
    int harga, jumlah, total;
} barang[5];

struct trx
{
    string kBarang, namaBarang;
    int jumlah, harga, total;
} transaksi[3];

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void dataBarang(){
    barang[0].kode_brg = "BRG001";
    barang[0].nama_brg = "Pensil";
    barang[0].harga = 2000;

    barang[1].kode_brg = "BRG002";
    barang[1].nama_brg = "Buku Tulis";
    barang[1].harga = 3500;

    barang[2].kode_brg = "BRG003";
    barang[2].nama_brg = "Penghapus";
    barang[2].harga = 1000;

    barang[3].kode_brg = "BRG004";
    barang[3].nama_brg = "Penggaris";
    barang[3].harga = 1500;

    barang[4].kode_brg = "BRG005";
    barang[4].nama_brg = "Ballpoint";
    barang[4].harga = 2500;
}

void dataPembeli(){
    //pembeli 1
    pembeli[0].kode_pbl = "P001";
    pembeli[0].status = "M";
    pembeli[0].nama = "Diana";

    //pembeli 2
    pembeli[1].kode_pbl = "P002";
    pembeli[1].status = "M";
    pembeli[1].nama = "Rina";

    //pembeli 3
    pembeli[2].kode_pbl = "P003";
    pembeli[2].status = "BM";
    pembeli[2].nama = "Lina";

    //pembeli 4
    pembeli[3].kode_pbl = "P004";
    pembeli[3].status = "BM";
    pembeli[3].nama = "Doni";

    //pembeli 5
    pembeli[4].kode_pbl = "P005";
    pembeli[4].status = "M";
    pembeli[4].nama = "Dodi";

}
