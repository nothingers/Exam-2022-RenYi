#include <stdio.h>
int main()
{
    int i=1;
    int n;
    int s=0,t=1,u=1;
    printf("Ҫ��ǰ���");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",u);
        u=s+t;
        s=t;
        t=u;
        i++;
    }
    return 0;
}