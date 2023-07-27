/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA, numB, numC, mode;
    
    printf("Introduzca el primer valor numerico: ");
    scanf("%d", &numA);
    fflush( stdin );
    printf("Introduzca el segundo valor numerico: ");
    scanf("%d", &numB);
    fflush( stdin );
    printf("Introduzca el tercer valor numerico: ");
    scanf("%d", &numC);
    fflush( stdin );
    printf("Indique si se debe mostrar ascendentemente (1) o descendentemente (otro): ");
    scanf("%d", &mode);
    fflush( stdin );
    int numbers[3] = {numA, numB, numC};
    
    int ascendente(const void *a, const void *b) {
        int aInt = *(int *) a;
        int bInt = *(int *) b;
        return aInt - bInt;
    }
    
    int descendente(const void *a, const void *b) {
        int aInt = *(int *) a;
        int bInt = *(int *) b;
        return bInt - aInt;
    }
    
    if (mode == 1){
        qsort(numbers, 3, sizeof(int), ascendente);
        printf("valor %d\n", numbers[0]);
        printf("valor %d\n", numbers[1]);
        printf("valor %d", numbers[2]);
    }
    else{
        qsort(numbers, 3, sizeof(int), descendente);
        printf("valor %d\n", numbers[0]);
        printf("valor %d\n", numbers[1]);
        printf("valor %d", numbers[2]);
    }

    return 0;
}
