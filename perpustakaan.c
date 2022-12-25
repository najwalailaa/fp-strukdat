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

void hapus()
{
  int i;
  int x;
  cetakqueue();
  printf("\nHapus No Antrian: ");
  scanf("%d",&x);
  for(i = x; i<queue.belakang; i++)
    {
      queue.elemen[i] = queue.elemen[i+1];
    }
  queue.belakang--;
  hapusdata();
  updatedata();
}

void updatedata()
{
  int i;
  x = fopen("file.txt","a");
  for(i = 1; i<queue.belakang; i++)
    {
      fwrite(&queue.elemen[i], sizeof(queue.elemen[i]),1,x);
    }
  fclose(x);
}
