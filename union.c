#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;


    data.i = 10;
    printf("After assigning integer:\n");
    printf("i = %d\n\n", data.i);

    
    data.f = 25.5;
    printf("After assigning float:\n");
    printf("f = %.2f\n\n", data.f);


    strcpy(data.str, "Hello");
    printf("After assigning string:\n");
    printf("str = %s\n", data.str);

    return 0;
}