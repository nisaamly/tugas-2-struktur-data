#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct pbl


void cetakNota(int data, int subtotal, int diskon, int total, int jmlBayar, int kembali, string kodePemb, string NamaPembeli, string status);
{
    int ln = 5, n;
    gotoxy(0,0); cout << "TOKO INDO APRIL";
    gotoxy(0,1); cout << "Jl. DI Panjaitan 128 Purwokerto";
    gotoxy(0,4); cout << "Kode Barang";
    gotoxy(15,4); cout << "Nama Barang";
    gotoxy(30,4); cout << "Jumlah";
    gotoxy(40,4); cout << "Harga";
    gotoxy(49,4); cout << "Total";

    for(n = 0; n<data; n++){
        gotoxy(0,ln); cout << transaksi[n].kBarang;
        gotoxy(15,ln); cout << transaksi[n].namaBarang;
        gotoxy(30,ln); cout << transaksi[n].jumlah;
        gotoxy(40,ln); cout << transaksi[n].harga;
        gotoxy(49,ln); cout << transaksi[n].total;
        ln++;
    }

    gotoxy(0,8); strip(60);
    gotoxy(0,9); cout << "Subtotal";
    gotoxy(49,9); cout << subtotal;
    gotoxy(0,10); cout << "Diskon";
    gotoxy(49,10); cout << diskon;
    gotoxy(0,11); cout << "Total";
    gotoxy(49,11); cout << total;
    gotoxy(0,12); strip(60);
    gotoxy(0,13); cout << "Jumlah Bayar";
    gotoxy(49,13); cout << jmlBayar;
    gotoxy(0,14); cout << "Kembali";
    gotoxy(49,14); cout << kembali;


    gotoxy(0,17); cout << "Kode Pembeli";
    gotoxy(15,17); cout << ":";
    gotoxy(18,17); cout << kodePemb;
    gotoxy(0,18); cout << "Nama Pembeli";
    gotoxy(15,18); cout << ":";
    gotoxy(18,18); cout << NamaPembeli;
    gotoxy(0,19); cout << "Status";
    gotoxy(15,19); cout << ":";
    gotoxy(18,19); cout << status;

}


int main()
{
    int tambah, bnykBarang = 0, indxTrx;
    int data_Pembeli, data_barang, jumlah, kembalian, jmlBayar;
    float diskon, total, subTotal = 0, tmpSubTotal = 0;
    string kdPembeli, kdBarang, cnvrtStatus;

    tampilData();
    cout << endl;
    strip(100);
    gotoxy(40,11); cout << "Transaksi Pembelian\n";
    strip(100);

    gotoxy (0,13); cout << "KodGe Pembeli : ";
    cin >> kdPembeli;
    if (kdPembeli == "P001"){
        data_Pembeli = 0;
    } else if (kdPembeli == "P002"){
        data_Pembeli = 1;
    } else if (kdPembeli == "P003"){
        data_Pembeli = 2;
    } else if (kdPembeli == "P004"){
        data_Pembeli = 3;
    } else if (kdPembeli == "P005"){
        data_Pembeli = 4;
    }

    gotoxy(0,14); cout << "Nama Pembeli   : " << pembeli[data_Pembeli].nama;
    if (pembeli[data_Pembeli].status == "M"){
        cnvrtStatus = "Member";
    } else {
        cnvrtStatus = "Bukan Member";
    }
    gotoxy(0,15); cout << "Status pembeli : " << cnvrtStatus << endl;

    do {
        bnykBarang++;
        cout << endl;
        cout << "Kode Barang : ";
        cin >> kdBarang;
        if (kdBarang == "BRG001"){
            data_barang = 0;
        } else if (kdBarang == "BRG002"){
            data_barang = 1;
        }else if (kdBarang == "BRG003"){
            data_barang = 2;
        }else if (kdBarang == "BRG004"){
            data_barang = 3;
        }else if (kdBarang == "BRG005"){
            data_barang = 4;
        }

        cout << "Nama Barang   : " << barang[data_barang].nama_brg << "\n";
        cout << "Harga Barang  : " << barang[data_barang].harga << "\n";
        cout << "Jumlah Barang : ";
        cin >> jumlah;
        tmpSubTotal = jumlah * barang[data_barang].harga;
        if (jumlah > 3){
            tmpSubTotal = tmpSubTotal - 300;
        } else {
            tmpSubTotal = tmpSubTotal;
        }
        cout << "Sub Total     : " << tmpSubTotal;
        subTotal = subTotal + tmpSubTotal;

        //Insert ke Structure Transaksi
        indxTrx = bnykBarang - 1;
        transaksi[indxTrx].kBarang = kdBarang;
        transaksi[indxTrx].namaBarang = barang[data_barang].nama_brg;
        transaksi[indxTrx].jumlah = jumlah;
        transaksi[indxTrx].harga = barang[data_barang].harga;
        transaksi[indxTrx].total = tmpSubTotal;

        cout << endl;
        cout << "\nApakah anda ingin menambah barang?\n1. Ya\n2. Tidak\nPilihan : ";
        cin >> tambah;
        if(bnykBarang > 3){
            cout << endl;
            cout << "Belanjaan sudah maksimal !";
            tambah = 2;
        }
    } while (tambah == 1);


    if (cnvrtStatus == "Member"){
        diskon = 0.1 * subTotal;
    } else {
        diskon = 0;
    }

    total = subTotal - diskon;

    strip(100);
    cout << endl;
    cout << "Total : "<< total << endl;
    strip(100);
    cout<< endl;
    cout << "Jumlah Bayar : ";
    cin >> jmlBayar;
    kembalian = jmlBayar - total;

    cout << endl;
    cout << endl;
    cout << "Tekan enter untuk mencetak nota..." << endl;

    getch();

    system("cls");

    cetakNota(bnykBarang, subTotal, diskon, total, jmlBayar, kembalian, kdPembeli, pembeli[data_Pembeli].nama, cnvrtStatus);

    cout << endl;
    cout << endl;
    cout << "Tekan enter untuk mengahkiri Program..." << endl;
    getch();
}

