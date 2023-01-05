#include "asuransi_barang.h"

int main()
{
    List L;
    adr P;
    infotype new_data;
    int pilihan, hargaAsuransi, banyak_data_baru, banyakBarang;
    string namaNasabah, namaBarang, tanggalPemesanan, backMenu;

    CreateList_1301213134(L);
    pilihan = selectMenu_1301213134();

    while (pilihan != 0) {
        switch (pilihan) {
        case 1:
            cout << "Jumlah Data Yang Akan Ditambahkan: ";
            cin >> banyak_data_baru;

            for (int i = 0; i < banyak_data_baru; i++) {
                cout << "Input Nama Nasabah: ";
                cin >> namaNasabah;
                cout << "Input Nama Barang: ";
                cin >> namaBarang;
                cout << "Input Banyak Barang: ";
                cin >> banyakBarang;
                cout << "Input Tanggal Pemesanan: ";
                cin >> tanggalPemesanan;
                cout << "Input Harga Asuransi: ";
                cin >> hargaAsuransi;

                new_data.hargaAsuransi = hargaAsuransi;
                new_data.namaBarang = namaBarang;
                new_data.banyakBarang = banyakBarang;
                new_data.namaNasabah = namaNasabah;
                new_data.tanggalPemesanan = tanggalPemesanan;

                P = CreateNewElement_1301213134(new_data);
                InsertFirst_1301213134(L, P);
            }

            cout << "Kembali ke menu utama(Y/N): ";
            cin >> backMenu;

            if (backMenu == "Y") {
                pilihan = selectMenu_1301213134();
            } else if (backMenu == "N") {
                pilihan = 0;
            }

            break;
        case 2:
            ShowAllData_1301213134(L);
            cout << "Kembali ke menu utama(Y/N): ";
            cin >> backMenu;
            if (backMenu == "Y") {
                pilihan = selectMenu_1301213134();
            } else if (backMenu == "N") {
                pilihan = 0;
            }

            break;
        case 3:
            reverseList_1301213134(L);
            cout << "Kembali ke menu utama(Y/N): ";
            cin >> backMenu;
            if (backMenu == "Y") {
                pilihan = selectMenu_1301213134();
            } else if (backMenu == "N") {
                pilihan = 0;
            }

            break;
        case 4:
            cout << "Rata-rata harga asuransi: " << average_1301213134(L) << endl;
            cout << "Kembali ke menu utama(Y/N): ";
            cin >> backMenu;
            if (backMenu == "Y") {
                pilihan = selectMenu_1301213134();
            } else if (backMenu == "N") {
                pilihan = 0;
            }

            break;
        }
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM";
    return 0;
}
