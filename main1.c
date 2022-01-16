
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    char a[6];
    strncpy(a, "web",3);
    printf("%c\n%c\n%c\n",a[0], a[1],a[2]);
    printf("%d", strlen(a));
    return 0;
}


/*
int main()
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