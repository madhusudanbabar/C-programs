#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and[n+1],or[n+1],xor[n+1],cp=0,c1=0,c2=0,c3=0;
    for(int a=1;a<=n;a++)
    {
        for(int b=1;b<a;b++)
        {
            if((a&b)<k)
            {
              and[c1++]=a&b;
            }

            if((a|b)<k)
            {
              or[c2++]=a|b;
            }

            if((a^b)<k)
            {
              xor[c3++]=a^b;
            }
        }
    }

    int andmax=0,ormax=0,xormax=0;
    for(int i=0;i<c1;i++)
    {
        for(int j=i;j<c1;j++)
        {
            if (and[i]<and[j])
            {
                and[i]=and[j]+and[i];
                and[j]=and[i]-and[j];
                and[i]=and[i]-and[j];
            }
        }
    }


    for(int i=0;i<c2;i++)
    {
        for(int j=i;j<c2;j++)
        {
            if (or[i]<or[j])
            {
                or[i]=or[j]+or[i];
                or[j]=or[i]-or[j];
                or[i]=or[i]-or[j];
            }
        }
    }



    for(int i=0;i<c1;i++)
    {
        for(int j=i;j<cp;j++)
        {
            if (xor[i]<xor[j])
            {
                xor[i]=xor[j]+xor[i];
                xor[j]=xor[i]-xor[j];
                xor[i]=xor[i]-xor[j];
            }
        }
    }
    printf("\n%d\n%d\n%d\n",and[0],or[0],xor[0]);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
