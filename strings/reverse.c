#include<stdio.h>

void reverse(char* str);
void main()
{
   // printf("hello");
    char str[] = "abcdf";
    reverse(str);
    printf("%s\n",str);
}

void reverse(char* str)
{
    char* end;
    char temp;
    for( end = str; *end != '\0'; end++)
    { }

    end--;

    while(str<end)
    {
        temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

