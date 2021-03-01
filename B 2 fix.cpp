/* Praktikum Minggu 2 */
/* Membalikkan Huruf */
/* Nisa Amalia_20051397038_2020B_MI */

#include <iostream>
using namespace std;
int main(){
  char huruf[1000], hasil[1000];
  int i, jumlaharray, jumlah = 0;
  printf("Masukkan sebuah array: ");
  fgets(huruf, sizeof(huruf), stdin);
  while (huruf[jumlah] != '\0'){
    jumlah++;
  }
  jumlaharray = jumlah - 1;
  for (i = 0; i < jumlah; i++){
    hasil[i] = huruf[jumlaharray];
    jumlaharray--;
  }
  hasil[i] = '\0';
  printf("Hasil reverse array: %s \n", hasil);
  return 0;
}
