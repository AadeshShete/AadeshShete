#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "mahabharat";
    char str2[] = "ramayana";

    // the length funtions 
    int len = strlen(str1);
    printf("\n The length od the str1 : = %d ",len);

    // the copy function 
    strcpy(str1,str2);
    printf("\n Str1 = %s , str2 = %s ",str1,str2);

    // for concate 
    char name1[10] ;
    char name2[10] ;
    
    printf("\nEnter name1 : = ");
    scanf("%s",&name1);
    printf("\nEnter name2 : = ");
    scanf("%s",&name2);
    
    strcat(name1,name2);
    printf("\nThe name1 : = %s , name2 = %s ",name1,name2);
    
    //compare the string 
    // if they r same then returns 0 and if diff returns 1 
    if (strcmp(name1,name2))
    {
        printf("\n False : diff ");
    }
    else
    {
        printf("\n True : same");
    }
    



    return 0 ; 
}
