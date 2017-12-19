#include "func.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int return_answer(char*output)
{
    printf("-----\n");
    printf(" | | \n");
    printf("----- %s\n",output);
}

int smalloc(char*len)
{
    return malloc(char*(len)+1);
}

int TEACH()
{
    int i;
    int num;

    printf("enter the number of teach.(0 is exit)\n");
    scanf("%d",&num);
    getchar();

    if(num==0)
    {
        return;
    }

    for(i=0;i<2;i++)
    {
        if(i=0 && !strcmp(buffer,input))
        {
           fpirntf(buffer,fp);
        }

        if(i=1 && strlen(buffer) < strlen(len) && strcmp(input,"")==NULL)
        {
        }
    }
}











