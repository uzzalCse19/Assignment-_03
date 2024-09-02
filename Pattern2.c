#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int s=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++) printf(" ");
        for(int j=i;j>=1;j--) printf("%d",j);
        printf("\n");
        s--;

    }
    return 0;
}