
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void main(void)
{
    int i = 0, j = 1, k = 2, m;
    m = ++i && j-- || ++k;
    printf("%d%d%d%d", i, j, k, m);
}

/*
int main(void)
{
    char a[6];
    strncpy(a, "web",3);
    printf("%c\n%c\n%c\n",a[0], a[1],a[2]);
    printf("%d", strlen(a));
    return 0;
}
*/

/*
int main(void)
{
    FILE *fptr = fopen("file.txt","r");
    char x;
    x = fgetc(fptr);
    while (x != EOF)
    {
        printf("%c",x);
        x = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}
*/