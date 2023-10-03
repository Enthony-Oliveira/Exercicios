#include<stdio.h>

    int main()
    {
        int a, b;
        a = 80;
        b = 30;

        int *maior_endereco = (&a > &b) ? &a : &b;

        printf("%p\n" ,(void*) maior_endereco);

        return 0;


    }