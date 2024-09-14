#include<stdio.h>
void function (int n)
{
    int count=0;
    int i= 1;
    count++;
    int s =1;
    count++;
    while(s <= n)
    {
         count++;
         i++;
         count++;
         s += i;
         count++;
     } 
     count++;
     printf("%d",count);
}  
int main()
{
    int n;
    scanf("%d",&n);
    function(n);
}
