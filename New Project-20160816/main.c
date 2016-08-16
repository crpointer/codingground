#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    int age = 14;
    int *p1;
    int *p2;
    
    p1 =&age;
    p2 =p1;
    printf("p1 = %p \n", p1);
    printf("p2 = %p \n", p2);
    printf("&p1 = %p \n", &p1);
    printf("&p2 = %p \n", &p2);
    printf("p1 pointing on %d \n", *p1);
    printf("p2 pointing on %d \n", *p2);

    return 0;
}

