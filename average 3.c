#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,a,m,fa;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    a=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
    printf("Media: %.1lf\n",a);
    if(a>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(a<5.0){
            printf("Aluno reprovado.\n");
    }
    else if(a>=5.0 && a<=6.9 ){
        printf("Aluno em exame.\n");
        scanf("%lf",&m);
        printf("Nota do exame: %.1lf\n",m);
        fa=(m+a)/2;
        if(fa>=5.0){
            printf("Aluno aprovado.\n");
        }
        else if(fa<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",fa);
    }
    return 0;
}
