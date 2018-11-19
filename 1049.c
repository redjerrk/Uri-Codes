#include<stdio.h>
int main()
{
    char c;
    scanf("%s",&c);
    if(c=='vertebrado'){
        scanf("%s",&c);
        if(c=='ave'){
            scanf("%s",&c);
            if(c=='carnivoro')
                printf("aguia\n");
            if(c=='onivoro')
                printf("pomba\n");
        }
    }
}
