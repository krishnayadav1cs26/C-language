#include <stdio.h>

int main(){
    int age = 50;
    
    if(age>70){
        printf("You can drive and you are a senior citizen");
    }
    else if(age>30){
        printf("You can drive and you are elder");
    }
    else if(age>20){
        printf("You can drive");
    }
    return 0;
}