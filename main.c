#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
FILE *y, *x;

typedef struct {
  char nama[50], judul[100], no[20];
  int nobook;
}data;

typedef struct{
  int belakang;
  data elemen[100];
}typequeue;

typequeue queue;

void ambilfile();
void enqueue(data ib);
void dequeue();
void gantidata (int noganti);
void buatqueue();
void hapusdata();
void cetakqueue();
void caridata(int cari);
void hapus();
void updatedata();
