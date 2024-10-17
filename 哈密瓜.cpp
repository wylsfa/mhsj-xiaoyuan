#include<stdio.h>
int main()
{
    int n,m,b=0,w;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        w+=a[i];
        if(w==m)
        {
            b++;
            w=0;
        }
        if(w>m)
        {
            w-=a[i];
        }
    }
    printf("%d",b);
}
