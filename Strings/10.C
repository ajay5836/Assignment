#include <stdio.h>
#include <string.h>
int check(char [],int);
int main()
{
    char a[100];
    printf("Enter a string: ");
    gets(a);
    char k;
    printf("Enter a character you want to search in the string: ");
    k=getchar();
    int res = check(a,k);
    puts(a);
    if(res==1)
    printf("%c found in the string!");
    else 
    printf("%c not found in the string! ");
    return 0;

}
int check(char a[],int k)
{
    for(int i=0;a[i];i++)
    {
        if(a[i]==k)
        return 1;

    }
    return 0;
}