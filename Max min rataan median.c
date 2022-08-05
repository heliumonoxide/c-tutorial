#include<stdio.h>
int main ()
{/* Kamus : */
  int i;
  int Tab[10]= { 1, 70 , -5 , 200, 3, 100, 30, 8, 99, 100 };
  int min;
  int max;
  float rataan;
  float median;
  /* Algoritma */
  min = Tab[0];
  for (i=1;i< 10; i++)  {
     if (Tab[i]<min) {
        min=Tab[i];
     }
  printf ("Nilai min = %d \n", min);
    
  rataan = Tab [0];
  for (i = 1; i<10 ; i++){
      rataan = rataan + Tab[i];
  }
  rataan = rataan/i;
  }
  printf ("Nilai rataan = %.2f \n", rataan);  
  
  max = Tab[0];
  for (i = 1; i< 10; i++)  {
     if (Tab[i]>max) {
        max=Tab[i];
     }}
  printf ("Nilai max = %d \n", max);
  
  median = (min+max)/2;
  printf ("Nilai median = %.2f \n", median);
  
  
  return 0;
}
