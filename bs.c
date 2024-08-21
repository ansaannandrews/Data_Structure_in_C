#include<stdio.h>
void main()
{
  int n,i,x,A[50],left,right,flag=0,mid=0,t=0;
  t=t+3;
  printf("Enter the number of elements: ");
  t++;
  scanf("%d",&n);
  t++;
  printf("Enter the elements to array: ");
  t++;
  for(i=0;i<n;i++)
  {
     t++;
     scanf("%d",&A[i]);
     t++;
  }
  t++;
   printf("Enter the number to be searched: ");
  t++;
  scanf("%d",&x);
  t++;
  right=n-1;
  t++;
  while(left<=right)
  {
    t++;
    mid=(left+right)/2;
    t++;
        if(x==A[mid])
        {
           t++;
           flag=1;
           t++;
           break;
        }
        else if(x>A[mid])
        {
           t++;
           left=mid+1;
           t++;
           continue;
        }
        else
        {
           t++;
           right=mid-1;
           t++;
           continue;
        }
    }
    if(flag==1)
    {
        t++;
        printf("Search element found at %d\n",mid);
        t++;
    }
    else if(flag==0)
    {
       t++;
       printf("Search element not found\n");
       t++;
    }
    printf("Space Complexity = %d\n",(((8*4)+(n*4))));
    t++;
    t++;
    printf("Time Complexity = %d ",t);
}
  
  
