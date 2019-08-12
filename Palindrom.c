void main()
{
int a,r,sum=0,t;
clrscr();
printf("Enter any number:");
scanf("%d",&a);
t=a;
while(a>0)
{
r=a%10;
sum=sum*10+r;
a=a/10;
}
a=t;
if(a==sum)
printf("yes this is palindrom");
else
printf("no this is not a palindrom");
getch();
}
