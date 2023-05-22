#include <stdio.h>  
#include <string.h>   
void revstr(char *str1)  
{  
    int i, n;
	char temp;  
    n = strlen(str1);
    for (i = 0; i < n/2; i++)  
    {  
         
        temp = str1[i];  
        str1[i] = str1[n - i - 1];  
        str1[n - i - 1] = temp;  
    }  
}  
      
    int main()  
    {  
        char str[50];
        printf (" Enter the string: ");  
        gets(str);
        revstr(str);  
        printf (" After reversing the string: %s", str);  
    }  

