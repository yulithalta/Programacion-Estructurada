#include <stdio.h>
#include <math.h>
#include <conio.h>
void binaria (int vector[],int tam, int valor);
int main()
{
      int vector[10],i,j,aux,izq,der,cen,valor;
      
      for(i=0;i<10;i++)
         {
              printf("Introduce un numero: ");
              scanf("%d",&vector[i]);
         }
      for(i=0;i<10;i++)
         {
              for(j=0;j<(10-i);j++)
                 {
                     if(vector[j]>vector[j+1])
                       {
                            aux=vector[j];
                            vector[j]=vector[j+1];
                            vector[j+1]=aux;
                       }
                 }
         }
      printf("el vector ordenado de menor a mayor queda asi: ");                  
      for(i=0;i<10;i++)
      {
      printf(" %d ",vector[i]);
      }
      printf("\nNumero que queremos buscar: ");
      scanf("%d",&valor);
      getch();
}
void binaria(int vector[],int tam, int valor)
{
      
      izq=0;
      der=9;
      cen=(9+1)/2;
      while(vector[cen] != valor && izq<der)
           {
                if (vector[cen]>valor)
                   {
                       der=cen-1;
                   }
                  else
                   {
                       izq=cen+1;
                   }                            
                   cen=(izq+der)/2;
           }
      if(vector[cen]==valor)
        {
           printf("Encontrado en la posicion %d",cen+1);
        }
       else
        {
           printf("No encontrado");
        }
}
