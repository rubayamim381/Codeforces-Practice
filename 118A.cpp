#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;

    scanf("%s",&s);

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]=97+s[i]-65;
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
            printf(".%c",s[i]);
    }
    printf("\n");
}
