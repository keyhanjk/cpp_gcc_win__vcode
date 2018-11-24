#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("hello\n");

    int i = 5;
    float f = 5.6f;
    i = f;
    printf("%f\n", f);
    printf("%d\n", i);
    scanf("%d", &i);  
    return 0;
}
