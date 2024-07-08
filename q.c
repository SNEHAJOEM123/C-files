#include <stdio.h>

void function1(int u,int v)
{
    u=(u++)-u+1%2;
    v=(++v)-v+1%2;
    printf("\nWithin function1, u=%d  v=%d",u,v);
    return;
}
void function2(int *pu,int *pv)
{
    *pu=(*pu)++-(*pu)+1%2;
    *pv=++(*pv)-(*pv)+1%2;
    printf("\nWithin function2,*pu=%d  *pv=%d",*pu,*pv);
    return;
}

int main()
{
    int u,v;
    printf("Enter the value of u:");
    scanf("%d",&u);
    printf("Enter the value of v:");
    scanf("%d",&v);
    printf("\nBefore calling function1, u=%d  v=%d",u,v);
    function1(u,v);
    printf("\nAfter calling function1, u=%d  v=%d",u,v);
    printf("\nBefore calling function2, u=%d  v=%d",u,v);
    function2(&u,&v);
    printf("\nAfter calling function2, u=%d  v=%d",u,v);
    return 0;
}