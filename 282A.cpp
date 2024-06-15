#include<stdio.h>
#include<string.h>
int main()
{
    int n, x=0,i;
    char temp[10];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",&temp[i]);

        if(temp[0] == 'x')
        {
            if(temp[1] == '+')
            {
                x++;
            }
            else if(temp[1] == '-')
            {
                x--;
            }
        }

         if(temp[1] == '+')
        {
            ++x;
        }
        else{
            --x;
        }
    }
    printf("%d\n",x);
    return 0;
}
