#include <stdio.h>
#include <string.h>
#include <assert.h>

void n_reverse_string(char* str, const int len);
void reverse_string(char *str);
void my_strcpy(char *dest, const char *src, int len);
int my_strcmp(const char *first, const char *second);

int main(int argc, char* argv[])
{
    /* char s[] = "hello"; */
    /* n_reverse_string(s, strlen(s)); */
    /* reverse_string(s); */
    /* char s[6]; */
    /* my_strcpy(s, "hello", 6); */
    /* printf("%s\n", s); */
    /* printf("%d\n", my_strcmp("aardvark", "a")); */
    return 0;
}

/* [h][e][l][l][o][\0] */
void n_reverse_string(char* str, const int len)
{
    char *start, *end;
    if(str == NULL || len == 0)return;
    
    /* You a hacker?! */
    assert(len == strlen(str));

    for(start = str, end = str + len - 1; start < end; start++, end--)
    {
        /* swap */
        char tmp = *start;
        *start = *end;
        *end = tmp;
    }

    return;
}

void reverse_string(char *str)
{
    char *start, *end, tmp;
    const int len = strlen(str);
    if(str == NULL || len == 0) return;
    
    start = str;
    end = str + len - 1;
    while(start < end)
    {
        tmp = *start;
        *start++ = *end;
        *end-- = tmp;
    }
}

void my_strcpy(char *dest, const char *src, int len)
{
    /* we were passed a null pointer or a bad length */
    if(src == NULL || dest == NULL || len < 1) return;

    /* repeat len times */
    while(len-- > 0)
    {
        /* If we get to nul, end this loop after copying */
        if(*src == '\0')len = 0;
        *dest++ = *src++;
    }
}

int my_strcmp(const char *first, const char *second)
{
    char a, b;
    unsigned int len;
    if(first == NULL || second == NULL) return 0;

    /* Length mismatch.  Longer one is larger */
    if(strlen(second) > strlen(first))
    {
        return 1;
    }
    if(strlen(second) < strlen(first))
    {
        return -1;
    }

    /* Use either length. we've verified they're the same */
    len = strlen(first);
    while(len-- > 0)
    {
        /* go until you find a mismatch */
        const char a = *first++;
        const char b = *second++;
        if(a > b)
        {
            return -1;
        }
        if(a < b)
        {
            return 1;
        }
    }
    /* no mismatch. they're the same */
    return 0;
}
