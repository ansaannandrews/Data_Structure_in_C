#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *head = NULL;

void insertion() {
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Overflow\n");
        return;
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        char pos;
        printf("Enter where to insert the new element: a. Insert at Front b. Insert at End c. Insert at Random Position\n");
        getchar();
        scanf("%c", &pos);

        if (pos == 'a') {
            temp->link = head;
            head = temp;
        } else if (pos == 'b') {
            struct node *ptr = head;
            while (ptr->link != NULL) {
                ptr = ptr->link;
            }
            ptr->link = temp;
        } else if (pos == 'c') {
            int key;
            printf("Enter the element after which new node is to be inserted: ");
            scanf("%d", &key);
            struct node *ptr1 = head;
            while (ptr1 != NULL && ptr1->data != key) {
                ptr1 = ptr1->link;
            }
            if (ptr1 != NULL) {
                temp->link = ptr1->link;
                ptr1->link = temp;
            } else {
                printf("Element not found in linked list! \n");
                free(temp);
            }
        } else {
            printf("Invalid Input! \n");
            free(temp);
        }
    }
}

void deletion() {
    if (head == NULL) {
        printf("Underflow Error! \n");
        return;
    }

    char pos;
    printf("Enter from where to delete element: a. Delete from Front b. Delete from End c. Delete from Random Position\n");
    getchar();
    scanf("%c", &pos);

    if (pos == 'a') {
        struct node *ptr = head;
        printf("Deleted element is %d \n", ptr->data);
        head = ptr->link;
        free(ptr);
    } else if (pos == 'b') {
        struct node *ptr1 = head, *ptr2 = head->link;
        if (ptr2 == NULL) {
            printf("Deleted element is %d \n", ptr1->data);
            head = NULL;
            free(ptr1);
        } else {
            while (ptr2->link != NULL) {
                ptr1 = ptr2;
                ptr2 = ptr2->link;
            }
            printf("Deleted element is %d \n", ptr2->data);
            ptr1->link = NULL;
            free(ptr2);
        }
    } else if (pos == 'c') {
        int key;
        printf("Enter the element whose node is to be deleted: ");
        scanf("%d", &key);
        struct node *ptr1 = head, *ptr2 = head;

        if (head->data == key) {
            printf("Deleted element is %d \n", head->data);
            head = head->link;
            free(ptr1);
            return;
        }

        ptr2 = ptr1->link;
        while (ptr2 != NULL && ptr2->data != key) {
            ptr1 = ptr2;
            ptr2 = ptr2->link;
        }

        if (ptr2 != NULL) {
            printf("Deleted element is %d \n", ptr2->data);
            ptr1->link = ptr2->link;
            free(ptr2);
        } else {
            printf("Element not found in linked list! \n");
        }
    } else {
        printf("Invalid Input! \n");
    }
}

void display() {
    if (head == NULL) {
        printf("Linked List is Empty \n");
    } else {
        printf("Linked List = \n");
        struct node *ptr = head;
        while (ptr != NULL) {
            printf("%d\t", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}

int main() {
    int choice = 0;
    printf("\nHINT:\nEnter 1 to perform INSERTION operation\nEnter 2 to perform DELETION operation\nEnter 3 to DISPLAY elements\nEnter 4 to exit the program\n");

    while (choice != 4) {
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Successfully exited from the program\n");
                break;
            default:
                printf("Invalid Input! \n");
                break;
        }
    }
    return 0;
}

