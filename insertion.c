#include<stdio.h>
void main()
{
  int n,i,j,A[50],temp,t=0;
  t++;
  printf("Enter the number of elements: ");
  t++;
  scanf("%d",&n);
  t++;
  printf("Enter the elements to the array: ");
  for(i=0;i<n;i++)
  {  
     t++;
     scanf("%d",&A[i]);
     t++;
  }
  t++;
  for(i=1;i<n;i++)
  {  
     t++;
     temp=A[i];
     t++;
     j=i-1;
     t++;
       while(j>=0 && A[j]>temp)
       {
          t++;
          A[j+1]=A[j];
          t++;
          j--;
          t++;
       }
    A[j+1]=temp;
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
