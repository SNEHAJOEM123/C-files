#include <stdio.h>

int reverse(int n)
{
    int rev=0,rem;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    return rev;

}


int decimal_to_octal(int n)
{
    int octal_n=0,i=1;
    int rem;

    while (n!=0)
    {
        rem=n%8;
        octal_n=octal_n+rem*i;
        n=n/8;
        i=i*10;

    }
    return octal_n;
}

void odd_or_even(int m)
{
    int rev,p,q;
    rev=reverse(m);
    p=decimal_to_octal(m);
    q=decimal_to_octal(rev);
    int c1=0;
    int rem1;
    while (p!=0)
    {
        rem1=p%10;
        if (rem1%2==0)
        {
            c1++;
        }
        p=p/10;

    }

    int c2=0;
    int rem2;
    while (q!=0)
    {
        rem2=q%10;
        if (rem2%2==0)
        {
            c2++;
        }
        q=q/10;

    }

    if (c1==c2)
    {
        if (c1%2==0)
        {
            printf("EVEN %d",c1);
        }
        else
        {
            printf("ODD %d",c1);
        }
    }

    else
    {
        printf("DIFFERENT %d %d",c1,c2);
    }


    

    
}




int main()
{
    int n;
    scanf("%d",&n);
    odd_or_even(n);

}