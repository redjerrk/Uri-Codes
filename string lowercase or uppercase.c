#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,n,j,a;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        gets(s);
        for(i=0;s[i]!='\0';i++){
                a=0;
            if(isupper(s[i])){
                for(i=0;s[i]!='\0';i++){
                if(s[i]==s[i+1]){
                    a++;
                    printf("%c = %d\n",s[i],a);
                }
                }
            }
        }
    }


}
