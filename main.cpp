#include <stdio.h>

struct s1 {
    char *fname;

};

int main(int argc, char const *argv[])
{
    printf("hello\n");
 
    int i = 5;
    float f = 5.6f;
    i = f; 
    printf("%d\n", i);
    printf("%f\n", f);
    return 0;
}
