#include <stdio.h>
#define size 100000


void read_students(char A[],int n);
void print_students(char A[],int n);
int groupno(char c);
void arrange_students(char A[],int n);
void list_students(char A[],int n,int g);


int main()
{
    char ch;
    char A[size];
    int n,i=0;
    int g;
    int lvalues[size];
    int m=0;
    int k=0;
    char choices[size];
    scanf("%c ",&ch);
    scanf("%d ",&n);
    while (1)
    {
        if (ch=='r')
        {
            read_students(A,n);
        }

        else if (ch=='p')
        {
            choices[i]='p';
            i=i+1;
        }
        else if (ch=='a')
        {
            choices[i]='a';
            i=i+1;
        }
        else if (ch=='l')
        {
            scanf(" %d",&lvalues[k]);
            k=k+1;
            choices[i]='l';
            i=i+1;
        }

        else if (ch=='t')
        {
            choices[i]='t';
            break;
        }

        else
        {
            printf("Wrong choice");
        }
        scanf("\n%c",&ch);
    }



    i=0;
    while(1)
    {
        if (choices[i]=='p')
        {
            print_students(A,n);
            if (choices[i+1]=='p')
            {
                printf("\n");
            }
            i=i+1;
        }
        else if(choices[i]=='a')
        {
            arrange_students(A,n);
            i=i+1;
            printf("\n");
        }
        else if(choices[i]=='l')
        {
            g=lvalues[m];
            list_students(A,n,g);
            m=m+1;
            i=i+1;
        }
        else if(choices[i]=='t')
        {
            break;
        }
        else
        {
            printf("Wrong");
        }
    }



    return 0;
}

void read_students(char A[],int n)
{
    int j;
    for (j=0;j<n;j++)
    {
        char class;
        scanf("%c ",&class);
        A[j]=class;

    }
}

void print_students(char A[],int n)
{
    int j;
    for (j=0;j<n;j++)
    {
        printf("%c ",A[j]);
    }


}

int groupno(char c)
{
    if (c=='A'|| c=='N')
    {
        return 1;
    }
    else if(c=='B'||c=='O')
    {
        return 2;
    }
    else if(c=='C'||c=='P')
    {
        return 3;
    }
    else if(c=='D'||c=='Q')
    {
        return 4;
    }
    else if(c=='E'||c=='R')
    {
        return 5;
    }
    else if(c=='F'||c=='S')
    {
        return 6;
    }
    else if(c=='G'||c=='T')
    {
        return 7;
    }
    else if(c=='H'||c=='U')
    {
        return 8;
    }
    else if(c=='I'||c=='V')
    {
        return 9;
    }
    else if(c=='J'||c=='W')
    {
        return 10;
    }
    else if(c=='K'||c=='X')
    {
        return 11;
    }
    else if(c=='L'||c=='Y')
    {
        return 12;
    }
    else if(c=='M'||c=='Z')
    {
        return 13;
    }


}



void arrange_students(char A[],int n)
{
    char g1[100]={'\0'};
    char g2[100];
    char g3[100],g4[100],g5[100],g6[100],g7[100],g8[100];
    char g9[100],g10[100],g11[100],g12[100],g13[100];
    int a,b,c,d,e,f,g,h,i,j,k,l,m,o,grpno;
    a=b=c=d=e=f=g=h=j=k=l=m=o=0;
    for (i=0;i<n;i++)
    {
        grpno=groupno(A[i]);
        if (grpno==1)
        {
           g1[a]=A[i];
           a=a+1;
        }
        else if(grpno==2)
        {
            g2[b]=A[i];
            b=b+1;
        }
        else if(grpno==3)
        {
            g3[c]=A[i];
            c=c+1;
        }
        else if(grpno==4)
        {
            g4[d]=A[i];
            d=d+1;
        }
        else if(grpno==5)
        {
            g5[e]=A[i];
            e=e+1;
        }
        else if(grpno==6)
        {
            g6[f]=A[i];
            f=f+1;
        }
        else if(grpno==7)
        {
            g7[g]=A[i];
            g=g+1;
        }
        else if(grpno==8)
        {
            g8[h]=A[i];
            h=h+1;
        }
        else if(grpno==9)
        {
            g9[j]=A[i];
            j=j+1;
        }
        else if(grpno==10)
        {
            g10[k]=A[i];
            k=k+1;
        }
        else if(grpno==11)
        {
            g11[l]=A[i];
            l=l+1;
        }
        else if(grpno==12)
        {
            g12[m]=A[i];
            m=m+1;
        }
        else if(grpno==13)
        {
            g13[o]=A[i];
            o=o+1;
        }


    }
    i=0;
    printf("\n");
    while (g1[i]!='\0')
    {
        printf("%c",g1[i]);
        i=i+1;
    }


    /*a=b=c=d=e=f=g=h=i=j=k=l=m=o=0;

    while (i<n)
    {
        if (g1[a]!='\0')
        {
            A[i]=g1[a];
            a=a+1;
            i=i+1;
        }
        else if(g2[b]!='\0')
        {
            A[i]=g2[b];
            b=b+1;
            i=i+1;
        }
        else if (g3[c]!='\0')
        {
            A[i]=g3[c];
            c=c+1;
            i=i+1;
        }
        else if (g4[d]!='\0')
        {
            A[i]=g4[d];
            d=d+1;
            i=i+1;
        }
        else if (g5[e]!='\0')
        {
            A[i]=g5[e];
            e=e+1;
            i=i+1;
        }
        else if (g6[f]!='\0')
        {
            A[i]=g6[f];
            f=f+1;
            i=i+1;
        }
        else if (g7[g]!='\0')
        {
            A[i]=g7[g];
            g=g+1;
            i=i+1;
        }
        else if (g8[h]!='\0')
        {
            A[i]=g8[h];
            h=h+1;
            i=i+1;
        }
        else if (g9[j]!='\0')
        {
            A[i]=g9[j];
            j=j+1;
            i=i+1;
        }
        else if (g10[k]!='\0')
        {
            A[i]=g10[k];
            k=k+1;
            i=i+1;
        }
        else if (g11[l]!='\0')
        {
            A[i]=g11[l];
            l=l+1;
            i=i+1;
        }
        else if (g12[m]!='\0')
        {
            A[i]=g12[m];
            m=m+1;
            i=i+1;
        }
        else if (g13[o]!='\0')
        {
            A[i]=g13[o];
            o=o+1;
            i=i+1;
        }

    }*/
    return;


}

void list_students(char A[],int n,int g)
{
    int i,flag=0;
    printf("\n");

    for (i=0;i<n;i++)
    {
        if (groupno(A[i])==g)
        {
            flag=1;
            printf("%d ",400+i);
        }

    }


    if (flag==0)
    {
        printf("%d",-1);
    }
}

