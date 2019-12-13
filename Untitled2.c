
#include <stdio.h>

int main() {
    int a[10], n,loc=0;
    int largest1, largest2, i;

    printf("enter number of elements you want in array");
    scanf("%d", &n);
    printf("enter elements");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    largest1 = -9999999;
    for (i = 0; i < n; i++) {
        if (a[i] > largest1)
        {
            largest1 = a[i];
            loc=i;
        }
    }
    largest2 = -9999999;
    for (i = 0; i < n; i++) {
            if(i!=loc)
            {

                if (a[i] > largest2)
                {
                    largest2 = a[i];
                }
            }



    }
    printf("First and second largest number is %d and %d ", largest1, largest2);
}



