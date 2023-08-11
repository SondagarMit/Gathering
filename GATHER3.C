#include <stdio.h>
#include<conio.h>
#include<string.h>
int str_lenght(char);

void main()
{

    char str[1000];
    int length;
    clrscr();

    printf("Enter the string: ");
    scanf("%s", str);


    length = str_length(str);
    printf("The length of the string is %d", length);
    getch();
}

int str_length(char str[]) {

    int count;


    for (count = 0; str[count] != '\0'; ++count);

     return count;
}


