/*********************************************************************************
 * Collatz Conjecture Checking App is made for checking the Collatz conjecture   *
 * Made by Anatoliy6463 in 2023                                                  *
 *********************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    __int64_t n;
    scanf("%d", &n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            printf("%d\t", n);
	}
        else
        {
            n = n * 3 + 1;
	    printf("%d\t", n);
        }
    }
}
