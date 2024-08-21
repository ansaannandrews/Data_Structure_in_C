#include<stdio.h>
void main()
{
    int n,temp,A[20],i,j,t=0;
    t++;
    printf("Enter number of elements: ");
    t++;
    scanf("%d",&n);
    t++;
    printf("Enter array elements: ");
    t++;
    for(i=0;i<n;i++)
    {
        t++;
        scanf("%d",&A[i]);
        t++;
    }
    t++;
    for(i=0;i<n-1;i++)
    {
        t++;
        for(j=0;j<n-i-1;j++)
        {
            t++;
            if(A[j]>A[j+1])
            {
                t++;
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                t=t+3;
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
    printf("Space complexity = %d\n",5*4+(n*4));
    t++;
    t++;
    printf("Time complexity = %d",t);
}
