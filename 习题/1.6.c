 // ��дһ��C����,����ʱ����a,b,c ����ֵ,������е������

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;
    printf("��������������\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        max = a;
    }
    else if(b>=a && b>=c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("��������Ϊ %d \n",max);
    return 0;
}

