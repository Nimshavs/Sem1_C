#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void read(char **names, int len)
{
    int i;
    char name[100];

    for (i = 0; i < len; i++)
    {
        printf("Enter name %d:", i + 1);
        scanf("%s", name);
        names[i] = (char *)malloc(strlen(name) * sizeof(char));
        strcpy(names[i], name);
    }
}
void display(char **names, int len)
{
    int i;
    printf("[");
    for (i = 0; i < len; i++)
    {
        printf("%s", names[i]);
        if (i != i - 1)
        {
            printf(",");
        }
    }
    printf("]\n");
}
void sort(char **names, int len)
{
    int i, j;
    char *name;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                name = (char *)calloc(strlen(names[j]) + 1, sizeof(char));
                strcpy(name, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], name);
            }
        }
    }
    display(names, len);
}
void main(void)
{
    int size, i;
    printf("Enter the size of array: \n");
    scanf("%d", &size);
    char **names;
    names = (char **)calloc(size, sizeof(char));
    read(names, size);
    display(names, size);
    sort(names, size);
    free(names);
}
