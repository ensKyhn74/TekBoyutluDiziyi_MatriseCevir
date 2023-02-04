#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 12 elemanlı tek boyutlu diziyi 2 boyutlu matrise çevir(4x3 , 3x4 , 2x6 , 6x2 , 12x1 , 1x12)
// 57 18 4 55 64 14 24 74 75 0 93 64 dizisi için
// 3x4 matris:
/*
57      18      4       55
64      14      24      74
75      0       93      64
*/
int main() 

{
    
 int Dizi[12];
 
 int satir,sutun;
 
 int i,j;
 
 srand(time(NULL));
  
 for(i = 0 ; i < 12 ; i++)
 {
  Dizi[i] = rand()%100;

  printf("%d ",Dizi[i]);
 } 
  
 printf("\nSatir ve Sutun sayisini girin: ");
 scanf("%d %d",&satir,&sutun);
  
 int ikiBoyutluDizi[satir][sutun];
 
  for(i = 0 ; i < satir ; i++)
 {
   for(j = 0 ; j < sutun ; j++)   
  {  
   ikiBoyutluDizi[i][j] = Dizi[sutun*i + j];   
      
   printf("%d\t",ikiBoyutluDizi[i][j]);     
  }
   printf("\n");     
 } 
  
 return 0;
 
}