#include<stdio.h>
#include<string.h>
int main()
{
    char j[100];
    printf("Enter the word jomokenyatta\n");
    gets(j);
    strrev(j);//reverses the char
    printf("The reverse of the word is: %j\n",j);
    return 0;
}
