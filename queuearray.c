#include<stdio.h>
void enqueue();
void dequeue();
void display();
int item,front=-1,rear=-1,A[50],i,maxsize;
void main()
{
    printf("HINT:\nEnter 1 if you want to enqueue an element to the Queue\nEnter 2 if you want to dequeue an element to the Queue\nEnter 3 if you want to display the Queue\nEnter 4 if you want to break from the loop\n");
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
            rear++;
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
           front++;
           item=A[front];
           printf("Deleted item = %d\n",item);
           
        }
    }
    void display()
    {
        if(front==-1)
       {
           printf("Queue Underflow\n");
       }
       else
       {
           printf("Queue =\n");
           for(i=front;i<=rear;i++)
           {
               printf("%d\n",A[i]);
           }
       }
    }
