#include <stdio.h>
#include <string.h>
int check(char [],char []);
int main()
{
    char a[100],b[100];
    printf("Enter a string: ");
    fgets(a,100,stdin);
    char k;
    printf("Enter antother string: ");
    fgets(b,100,stdin);
    int res = check(a,b);
    if(res==1)
    printf("strings are not equal!");
    else 
    printf("strings are equal ! ");
    return 0;

}
int check(char a[],char b[])
{
    for(int i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        return 1;

    }
    return 0;
}