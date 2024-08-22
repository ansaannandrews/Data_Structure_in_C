#include<stdio.h>
struct poly
{
   int coeff;
   int exp;
};
void main()
{  
      int n,i;
      printf("Enter the number of terms in the polynomial: ");
      scanf("%d",&n);
      struct poly x[n];
      printf("Enter the terms in the polynomial: \n");
      printf("HINT: Enter the terms in descending order\n");
      for(i=0;i<n;i++)
      {
         printf("Coefficent %d: ",i+1);
         scanf("%d",&x[i].coeff);
         printf("Exponent %d: ",i+1);
         scanf("%d",&x[i].exp);
      }
      printf("Polynomial =\n");
         for(i=0;i<n;i++)
         {
           printf("(%dx^%d)",x[i].coeff,x[i].exp);
           if((i<n-1))
           {
             printf("+");
           }
         }
}
           
   
   
  
   
    
