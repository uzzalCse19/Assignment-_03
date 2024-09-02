#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void odd_even()
{
    int n;
    scanf("%d",&n);
    int arr[n+1],odd=0,even=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0) even++;
        else odd++;
    }
    printf("%d %d\n",even,odd);
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    odd_even();
    return 0;
}
