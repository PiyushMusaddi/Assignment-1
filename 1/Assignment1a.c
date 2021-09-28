
#include<stdio.h>

int main()
{
    char in[1000];
    printf("Enter the value\n");
    scanf("%s",in);
    int i=0;
    int check1=0,check2=0;
    while(in[i]!='\0')
    {
        if(in[i]=='.')
        {
            check1++;
            if(in[i+1]!='\0')
            check2=1;
        }
        i++;
    }
    if(check1==1 && check2==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
}

