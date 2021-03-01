#include <stdio.h>

int main() 
{
    int *db, test;
    test = 50;
    db = &test;
    *db = 15;

    printf("pointer value %d\n", *db);
}
