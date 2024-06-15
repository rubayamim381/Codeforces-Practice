#include<stdio.h>
int main(){
    int item,i;
    long int  m;
    scanf("%d",&item);

    for(i=0;i<item;i++)
    {
        scanf("%d",&m);
         printf(m%4==0?"YES\n":"NO\n");

    }
    return 0;

}
