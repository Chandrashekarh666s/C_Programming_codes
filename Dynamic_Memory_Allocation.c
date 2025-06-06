#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;  
    }

    
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    
    printf("You entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    
    free(ptr);

    return 0;
}
