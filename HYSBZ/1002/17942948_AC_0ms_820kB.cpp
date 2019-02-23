#include <stdio.h>
#define max(x,y) (x>y?x:y)
struct BI{
    char x[43],n;
    void operator+=(BI &a)
    {
        char mx=max(n,a.n),k=0;
        for(char i=1;i<=mx||k;i++)
        {
            if(i>n)x[i]=0;
            x[i]+=a.x[i]+k;
            k=x[i]/10,x[i]%=10;
            n=max(n,i);
        }
    }
    void operator=(char a){n=1,x[1]=a;}
    void out(){for(char i=n;i>=1;i--)printf("%d",x[i]);}
};
BI f,g,f1,f2,g1,g2;
int main()
{
    char n;
    scanf("%d",&n);
    f=1,f1=1,f2=1,g1=0,g2=0;
    for(char i=1;i<=n;i++)
    {
        if(i)g2+=f,g2+=f;
        if(i<n)g1+=g2;
        if(i<n)g+=g1;
        f=f1;
        f2+=f;
        f1+=f2;
    }
    g+=f;
    g.out();
    return 0;
}