#include<stdio.h>

int main(void) {
    int N1;
    int N2;
    printf ("Digite dois numeros:\n");
    scanf ("%d %d", &N1, &N2);
    printf ("%d + %d = %d\n", N1, N2, N1+N2);
    printf ("%d - %d = %d\n", N1, N2, N1-N2);
    printf ("%d / %d = %d\n", N1, N2, N1/N2);
    printf ("%d * %d = %d\n", N1, N2, N1*N2);
    printf ("%d %% %d = %d\n", N1, N2, N1%N2);

    return 0;
}