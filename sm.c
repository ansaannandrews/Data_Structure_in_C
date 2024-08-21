#include<stdio.h>
void main()
{  
    int m,n,A[50][50],B[50][50],i,j;
    int k=1;
    printf("Enter the number of rows in matrix: ");
    scanf("%d",&m);
    printf("Enter the number of columns in matrix: ");
    scanf("%d",&n);
    printf("Enter the elements to the array: ");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
         scanf("%d",&A[i][j]);
      }
   }
    B[0][0]=m;
    B[0][1]=n;
    for(i=0;i<m;i++)
    {  
        for(j=0;j<n;j++)
        {
            if(A[i][j]!=0)
            {
              B[k][0]=i;
              B[k][1]=j;
              B[k][2]=A[i][j];
              k++;
            }
        }
    }
    B[0][2]=k-1;
    printf("Sparse Matrix = \n");
    for(i=0;i<k;i++)
    {
       for(j=0;j<3;j++)
       {  
          printf("%d\t",B[i][j]);
       }
       printf("\n");
    }
}

    
    
    
