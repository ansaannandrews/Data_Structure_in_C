#include <stdio.h>

void main() {
    int n, A[50], pos, p, lc, rc;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    printf("Enter the position (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position.....\n");
    } else {
        if (pos > 0) {
            p = (pos - 1) / 2;
            printf("Parent = %d\n", A[p]);
        } else {
            printf("No Parent (root node)\n");
        }

        lc = 2 * pos + 1;
        if (lc >= n)
            printf("No left child\n");
        else
            printf("Left child = %d\n", A[lc]);

        rc = 2 * pos + 2;
        if (rc >= n)
            printf("No right child\n");
        else
            printf("Right child = %d\n", A[rc]);
    }
}



