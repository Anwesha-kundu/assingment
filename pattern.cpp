#include <stdio.h> 

int main() 

{

   int i,j,k; 

   for(i=1;i<5;i++) 

   {

        k=4;

       for(j=1;j<=i;j++) 

       {

         printf("%d",k);   

         k--;

       }

       printf("\t"); 

    }

}
