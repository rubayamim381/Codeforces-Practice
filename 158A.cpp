#include<stdio.h>
int main()
{
    int i, k, n, sum=0, a[50];
    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k]&&a[i]>0)
            sum++;
    }

    printf("%d\n",sum);
}
