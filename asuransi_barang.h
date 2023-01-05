#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>

using namespace std;

#define NIL NULL
#define info(P) P -> info
#define next(P) P -> next
#define prev(P) P -> prev
#define first(L) ((L).first)
#define last(L) ((L).last)

struct asuransiBarang {
    string namaNasabah;
    string namaBarang;
    int banyakBarang;
    string tanggalPemesanan;
    int hargaAsuransi;
};

typedef asuransiBarang infotype;
typedef struct elmList *adr;

struct elmList{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void CreateList_1301213134(List &L);
adr CreateNewElement_1301213134(infotype newData);
void ShowAllData_1301213134(List L);
void reverseList_1301213134(List &L);
void InsertFirst_1301213134(List &L, adr p);
double average_1301213134(List L);
int selectMenu_1301213134();


#endif // DLL_H_INCLUDED
