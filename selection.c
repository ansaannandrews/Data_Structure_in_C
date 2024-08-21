#include<stdio.h>
void main()
{
  int n,A[50],i,j,small,temp,t=0;
  t++;
  printf("Enter the number of array: ");
  t++;
  scanf("%d",&n);
  t++;
  printf("Enter the elements to the array: ");
  t++;
  for(i=0;i<n;i++)
  {
     t++;
     scanf("%d",&A[i]);
     t++;
  }
  t++;
  for(i=0;i<n;i++)
  {  
     t++;
     for(j=0;j<n;j++)
     {  
        t++;
        if(A[i]<A[j])
        {  
            t++;
            temp=A[i];
            t++;
            A[i]=A[j];
            t++;
            A[j]=temp;
            t++;
        }
     }
     t++;
  }  
  t++;
  printf("Sorted array =\n");
  t++;
  for(i=0;i<n;i++)
  {  
       t++;
       printf("%d\n",A[i]);
       t++;
  }
  t++;
  printf("Space Complexity = %d\n",((5*4)+(n*4)));
  t++;
  t++;
  printf("Time Complexity = %d",t);
}
