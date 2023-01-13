#include<stdio.h>
#include<string.h>
 
int main()
{
    char *source = "";
    char* target = strdup(source);
 
    printf("%s\n", target);
    return 0;
     unsigned int i, len;

        len = strlen(str) + 1;
        dest = malloc(len * sizeof(char));
        if (str == NULL)
                return (NULL);
        for (i = 0; i < len; i++)
        {
                if (dest == NULL)
                        return (NULL);
                dest[i] = str[i];
        }

}
