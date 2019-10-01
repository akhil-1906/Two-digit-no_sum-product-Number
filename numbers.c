#include<stdio.h>
int main()
{
int n,first,second,sum,mul;
printf("Enter two digit no.");
scanf("%d",&n);
if(n<10||n>99)
{
printf("invalid no. insert two digit no.");
}
else{
first=n/10;
second=n%10;
sum=first+second;
mul=first*second;
if(sum+mul==n){
printf("special number");
}
else{
printf("not a special number");
}
}
return 0;
}

