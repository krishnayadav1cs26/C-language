#include <stdio.h>

int main(){
    
    int a = 9;
    int b = 7;
    int c = 8;
    printf("The value is %d\n",a*b/c + 17);
    printf("The value is %d\n",4*b/7*c + 17*a);
    // important first * and second / and third +,- and than =
    // 4*b/7*c + 17*a
    // 4*b/7*c + 153
    // 28/7*c + 153
    // 4*c + 153
    // 32 + 153
    // 185
    return 0;

}