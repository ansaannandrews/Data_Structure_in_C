#include<stdio.h>
void enqueue();
void dequeue();
void display();
int item,front=-1,rear=-1,A[50],i,maxsize;
void main()
{
    int ch;
    printf("Enter limit: ");
    scanf("%d",&maxsize);
    while(ch!=4)
    {
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                  break;
            case 2:dequeue();
                  break;
            case 3:display();    
                  break;
            case 4:break;
            
            
        }
    }
}   
    void enqueue()
    {
        if(rear==maxsize-1)
        {
            printf("Overflow\n");
            
        }
        else
        {
            printf("Element to be pushed: ");
            scanf("%d",&item);
            rear=rear+1;
            A[rear]=item;
        }
    }
    void dequeue()
    {
        if(front==rear)
        {
            printf("Underflow\n");
        }
        else
        {  
           front=front+1;
           item=A[front];
           printf("Deleted item = %d\n",item);
           
        }
    }
    void display()
    {
        printf("Queue =\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",A[i]);
        }
}

