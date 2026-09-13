#include <stdio.h>

int main() {
    int length, breadth;

    printf("Enter length\n");
    scanf("%d", &length);

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("The area of this rectangle is %d\n", length * breadth);

    return 0;
}