#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
  int n,ans;
  clrscr();
  printf("ENTER YOUR NUMBER");
  scanf("%d",&n);
  ans=fact(n);
  printf("%d",ans);
  getch();
}
 int fact(int i)
 {
  if(i==0)
  {
   return 1;
  }
  else
  {
   return fact(i-1)*i;
  }
 }
