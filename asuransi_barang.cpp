#include "asuransi_barang.h"

void CreateList_1301213134(List &L) {
    first(L) = NIL;
    last(L) = NIL;
}

adr CreateNewElement_1301213134(infotype newData) {
    adr p = new elmList;

    info(p) = newData;
    next(p) = NIL;
    prev(p) = NIL;

    return p;
}

void ShowAllData_1301213134(List L) {
    adr p = first(L);
    adr q = last(L);

    int counter;

    counter = 1;
    while(p != NIL) {
        cout << "Data: " << counter << endl;
        cout << "Nama Nasabah: " << info(p).namaNasabah << endl;
        cout << "Nama Barang: " << info(p).namaBarang << endl;
        cout << "Banyak Barang: " << info(p).banyakBarang << endl;
        cout << "Tanggal Pemesanan: " << info(p).tanggalPemesanan << endl;
        cout << "Harga Asuransi: Rp. " << info(p).hargaAsuransi << endl;
        p = next(p);
        counter++;
    }
}

void reverseList_1301213134(List &L)
{
    adr p = first(L);
    adr q = next(p);

    if (first(L) == NIL){
        cout<<"List kosong"<<endl;
    } else {
        next(p) = NIL;
        prev(p) = q;
        while(q != NIL){
            prev(q) = next(q);
            next(q) = p;
            p = q;
            q = prev(q);
        }
        first(L) = p;
        cout<<"List dibalik"<<endl;
    }
}

void InsertFirst_1301213134(List &L, adr p) {
    if (first(L) == NIL) {
        first(L) = p;
        last(L) = p;
    } else {
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }
}

double average_1301213134(List L)
{
    adr P = first(L);

    double average;
    int totalHarga = 0;
    int banyakData = 0;

    while (P != NIL) {
        totalHarga += info(P).hargaAsuransi;
        banyakData++;
        P = next(P);
    }

    average = totalHarga/banyakData;

    return average;
}

int selectMenu_1301213134()
{
    int input;

    cout << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Membalik list" << endl;
    cout << "4. Menampilkan nilai rata-rata dari semua harga asuransi" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukan menu: ";
    cin >> input;

    return input;
}
