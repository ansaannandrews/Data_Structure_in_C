#include <stdio.h>
void push();
void pop();
void display();
int item,top=-1,A[50],i,maxsize;
void main()
{ 
    printf("Enter limit: ");
    scanf("%d",&maxsize);  
    printf("HINT:\nEnter 1 if you want to push an element to the Stack\nEnter 2 if you want to pop an element from the Stack\nEnter 3 if you want to display the Stack\nEnter 4 if you want to break from the loop\n");
    int ch;
    while(ch!=4)
    {
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                  break;
            case 2:pop();
                  break;
            case 3:display();    
                  break;
            case 4:break;
            
            
        }
    }
}   
    void push()
    {
        if(top==maxsize-1)
        {
            printf("Overflow\n");
            
        }
        else
        {
            printf("Element to be pushed: ");
            scanf("%d",&item);
            top++;
            A[top]=item;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            printf("Underflow\n");
        }
        else
        {
           A[top] = item;
           top--;
           printf("Deleted item =%d\n",item);
           
        }
    }
    void display()
    {   
        if(top==-1)
       {
           printf("Stack is empty\n");
       }
       else
       {
           printf("Stack =\n");
           for(i=top;i>=0;i--)
           {
               printf("%d\n",A[i]);
           }
       }
    }
