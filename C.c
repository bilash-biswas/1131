#include<stdio.h>
int main()
{
    int a,b,count=0,c=0,z=0,d=0,e=0,x,p=0,q=0,r=0;
    bilash:
    scanf("%d %d",&a,&b);
    z=z+1;
     if(a>b)
    {
        c=c+1;
        count=count+1;
    }
    else if(b>a)
    {
        d=d+1;
    }
    else if(a==b)
    {
        e=e+1;
    }
    p=p+c;
    q=q+d;
    r=r+e;
    c=0;
    d=0;
    e=0;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&x);
    if(x==1)
    {
        goto bilash;
    }
    else if(x==2)
    {
        goto k;
    }
    k:
    printf("%d grenais\n",z);
    printf("Inter:%d\n",p);
    printf("Gremio:%d\n",q);
    printf("Empates:%d\n",r);
    if(p>q)
    {
        printf("Inter venceu mais\n");
    }
    else if(p<q)
    {
        printf("Gremio venceu mais\n");
    }
    else if(p==q)
    {
        printf("Não houve vencedor\n");
    }
    return 0;
}
