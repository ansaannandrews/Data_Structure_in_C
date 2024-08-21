#include<stdio.h>
void main()
{
    int n,A[50],i,index,key,t=0;
    t++;
    printf("Enter the size of Array: ");
    t++;
    scanf("%d",&n);
    t++;
    printf("Enter the array elements: ");
    t++;
    for(i=0;i<n;i++)
    {   
       t++;
       scanf("%d",&A[i]);
       t++;
    }
    t++;
    printf("Enter the search element: ");
    t++;
    scanf("%d",&key);
    t++;
    index=-1;
    t++;
    for(i=0;i<n;i++)
    {
       t++;
       if(A[i]==key)
       {
          t++;
          index=i;
          t++;
          break;
        }
   }
   t++;
   if(index>=0)
   {
       t++;
       printf("Search element found at %d\n",i);
       t++;
   }
   else
   {
       t++;
       printf("Search element not found\n");
       t++;
   }
   printf("Space Complexity = %d\n",(5*4+(n*4)));
   t++;
   t++;
   printf("Time Complexity = %d",t);  
}
