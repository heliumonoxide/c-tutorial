#include<stdio.h>
int main ()
{
  /* Kamus : */
  int i;
  int Tab[10];
  int min; /* indek di mana  Tab[max] bernilai maksimum */
  int k, temp; /* variabel kerja */
  
  printf ("Masukan nilai tab 1 :");
  scanf ("%d",&Tab[0]);
    printf ("Masukan nilai tab 2 :");
  scanf ("%d",&Tab[1]);
    printf ("Masukan nilai tab 3 :");
  scanf ("%d",&Tab[2]);
    printf ("Masukan nilai tab 4 :");
  scanf ("%d",&Tab[3]);
    printf ("Masukan nilai tab 5 :");
  scanf ("%d",&Tab[4]);
    printf ("Masukan nilai tab 6 :");
  scanf ("%d",&Tab[5]);
    printf ("Masukan nilai tab 7 :");
  scanf ("%d",&Tab[6]);
    printf ("Masukan nilai tab 8 :");
  scanf ("%d",&Tab[7]);
    printf ("Masukan nilai tab 9 :");
  scanf ("%d",&Tab[8]);
    printf ("Masukan nilai tab 10 :");
  scanf ("%d",&Tab[9]);
  /* Algoritma maximum sort menurun, indeks paling kecil berisi nilai paling besar*/
  for (i=0; i<9; i++ ){
  /* tentukan indeks max, di mana Tab[max] bernilai maksimum */
  /* untuk index tabel i..10 */
     min = i;
     for (k= i+1 ;k< 10; k++)  {
        if (Tab[k]< Tab[min]) {
           min=k;
        }
     } 
 
    /* Tukar nilai Tab[max] dengan tab[i] */
    temp= Tab[i];
    Tab[i]= Tab[min];
    Tab[min] = temp;
  }
  for (i=0;i<10;i++) {
     printf (" %d ; ", Tab[i]);
  }
  return 0;
}
