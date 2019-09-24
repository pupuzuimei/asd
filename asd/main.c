#include <stdio.h>

int main() {
    int i=5;
    int j=10;
    char p;
    p=(char *)i;
    printf("*p=%x\n",p);
    printf("*p=%x\n",(p+3));
    printf("sum=%x\n",i+j);
    printf("i=%x\n",&i);
}
