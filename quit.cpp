#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define MAX 20
 
 void intercambio (int vector[],int i, int j);
 void quicksort (int vector[],int inf, int sup); 
 void imprimeVector (int vector[],int elem);
 
 int main()
 {
     int vector[MAX]={0};
     long numElem,i;
     printf("\nCuantos elementos quieres en el arreglo? ");
     scanf("%d",&numElem);
     for(i=0;i<numElem;i++)
        { 
            printf("\nDato: ");
            scanf("%ld",&vector[i]);
        }
     quicksort(vector,0,numElem-1);
     imprimeVector(vector,numElem);
     getch();
     return 0;
 }
 
 void intercambio (int vector [],int i, int j)
 {
      int aux;
      aux=vector[i];
      vector[i]=vector[j];
      vector[j]=aux;
 }
 
 void quicksort (int vector[],int inf, int sup)
 {
      int i,j,x;
      i=inf;
      j=sup;
      x=vector[(i+j)/2]; //obteniendo el pivote
      while(i<=j)
           { 
                 while(vector[i]<x)    //obteniendo elemento mayor de lado izquierdo del  pivote para intercambiar
                      { 
                          i++;
                      }
                 while(vector[j]>x)   // obteniendo elemento menor de lado derecho del pivote a intercambiar
                      {
                          j--;
                      }
                 if(i<=j)             //intercambiando cuando se sigan presentando valores menores ala derecha y mayores ala izquierda
                   {
                       intercambio(vector,i,j);
                       i++;
                       j--;
                   }
           }
      if(inf<j)
        {
               quicksort(vector,inf,j);
        }
      if(i<sup)
        {
               quicksort(vector,i,sup);
        }
 
 }
 
 void imprimeVector (int vector[],int elem)
 {
      int i;
      printf("\nVector ordenado con quicksort\n");
      for(i=0;i<elem;i++)
         {
              printf("[%d] ",vector[i]);
         }
 }
