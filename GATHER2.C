#include <stdio.h>
#include <conio.h>

int sum(int);
void main()
{
    int n,total;
     clrscr();
    printf("Enter size of the array : ");
    scanf("%d",&n);
    total = sum(n);

    getch();
}
int sum(int p)
{
  int i,a[5],sum=0;

    for(i=0; i<p; i++)
    {
	scanf("%d",&a[i]);
    }


    for(i=0; i<p; i++)
    {

	sum+=a[i];
    }
     printf("sum of array is : %d",sum);

    return sum;
}