#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char str[])
{
    int n=strlen(str),test=1;
    int i=0,j=n-1;
    while(i<j)
    {
        if(str[i]!=str[j]) 
        {
            test=0;
            break;
        }
        else i++,j--;
    }
    return test;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[1001];
    scanf("%s",str);
    int ans=is_palindrome(str);
    if(ans) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}