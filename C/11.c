#include <stdio.h>

int main(){

    int age = 45;

    if(age>20){
    
    printf("We are inside if\n");
    printf("Your age is greater than 20\n");
}

if (age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 50\n");
}
    return 0;
}