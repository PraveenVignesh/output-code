#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("output=code.c","r");
    char c;
    while(c!=EOF) {
        c=fgetc(fp);
        printf("%c",c);
    }
}
