#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    string namaPembeli, merek;
    int jumlah;
    double harga, ppn = 0, totalHarga, totalPembelian;

    // Input nama pembeli
    cout << "Masukkan nama pembeli: ";
    cin >> namaPembeli;

    // Pilihan Merek Mobil dan Harga
    cout << "Pilih Merek Mobil:\n";
    cout << "1. Porsche \n";
    cout << "2. Lamborghini \n";
    cout << "3. Supra \n";
    cout << "Masukkan nomor pilihan Anda: "; 
    int pilihan;
    cin >> pilihan;

    // Mengatur harga berdasarkan pilihan
    if (pilihan == 1) {
        merek = "Porsche";
        harga = 4000000000;
    } else if (pilihan == 2) {
        merek = "Lamborghini";
        harga = 3500000000;
    } else if (pilihan == 3) {
        merek = "Supra";
        harga = 2800000000;
    } else {
        cout << "Pilihan tidak valid.\n";
        return 1;
    }

    // Input jumlah pembelian
    cout << "Masukkan jumlah pembelian: ";
    cin >> jumlah;

    // Menghitung total harga sebelum PPN
    totalHarga = harga * jumlah;

    // Menghitung PPN 10% jika pembelian lebih dari 3 unit
    if (jumlah > 3) {
        ppn = totalHarga * 0.1;
    }

    // Menghitung total pembelian
    totalPembelian = totalHarga + ppn;

    // Output dengan fixed dan setprecision
    cout << fixed << setprecision(0); // Menampilkan tanpa notasi ilmiah dan tanpa desimal
    cout << "\nNama Pembeli: " << namaPembeli << endl;
    cout << "Merek Mobil: " << merek << endl;
    cout << "Harga per unit: Rp" << harga << endl;
    cout << "Jumlah pembelian: " << jumlah << endl;
    cout << "Total harga (sebelum PPN): Rp" << totalHarga << endl;
    cout << "PPN 10% (jika pembelian lebih dari 3): Rp" << ppn << endl;
    cout << "====================================+" << endl;
    cout << "Total pembelian (termasuk PPN): Rp" << totalPembelian << endl;

    return 0;
}
