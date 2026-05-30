#include<stdio.h>
int test(int A, int B );
int main()
{
int A = 10 , B = 20;
printf("\n Before function call A  = %d B = %d", A,B);
test (A,B);

printf("\n After function call A= %d B = %d", A,B);
}
int test (int A, int B)
{
    A = 0;
    B = 0;
    printf("\n Inside function A = %d B = %d",A, B);
    return 0;
}