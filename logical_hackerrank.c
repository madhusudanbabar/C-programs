#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and[n+1],or[n+1],xor[n+1],cp=0;
    for(int a=1;a<=n;a++){
        for(int b=1;b<a;b++){
            if((a&b)<=k)
            and[cp]=a&b;
            if((a|b)<=k)
            or[cp]=a|b;
            if((a^b)<=k)
            xor[cp++]=a^b;
        }
    }

    ArrayIO(and,cp);
    int andmax=0,ormax=0,xormax=0;
    for(int i=0;i<cp;i++)
    {
        for(int j=i;j<cp;j++)
        {
            if (and[i]<and[j])
                {
                    and[i]=and[j]+and[i];
                    and[j]=and[i]-and[j];
                    and[i]=and[i]-and[j];
                }

            if (or[i]<or[j])
                {
                    or[i]=or[j]+or[i];
                    or[j]=or[i]-or[j];
                    or[i]=or[i]-or[j];
                }

            if (xor[i]<xor[j])
                {
                    xor[i]=xor[j]+xor[i];
                    xor[j]=xor[i]-xor[j];
                    xor[i]=xor[i]-xor[j];
                }
        }
    }
    printf("\n%d\n%d\n%d\n",and[cp-1],or[cp-1],xor[cp-1]);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
