#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and[n+1],or[n+1],xor[n+1],cp=0,c1=0,c2=0,c3=0,andmax=0,ormax=0,xormax=0;
    for(int a=1;a<=n;a++)
    {
        for(int b=1;b<a;b++)
        {
            if((a&b)<k&&(a&b)>andmax)
            {
              andmax=a&b;
            }

            if((a|b)<k&&(a|b)>ormax)
            {
              ormax=a|b;
            }

            if((a^b)<k&&(a^b)>xormax)
            {
              xormax=a^b;
            }
        }
    }

    printf("%d\n%d\n%d\n",andmax,ormax,xormax);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
