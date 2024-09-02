#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count_before_one(int arr[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=1) cnt++;
        else break;
    }
    return cnt;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int ans=count_before_one(arr,n);
    printf("%d\n",ans);
    return 0;
}
