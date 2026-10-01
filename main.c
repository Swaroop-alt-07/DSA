#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
   int a,b,ans;
   printf("\n read 2 numbers :\n");
   scanf("%i%i",&a,&b);
   ans=gcd(a,b);
   printf("\nthe gcd of %i and %i is %i \n",a,b,ans);
   return 0;
}
