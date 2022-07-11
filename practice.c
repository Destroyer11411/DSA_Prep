#include<stdio.h>

#define ROW 3
#define COL 3



void make(int a[ROW][COL],int n,int m)
{
    int i,j;

    for(i=0;i<ROW;i++)
    {
        a[n][i]=-1;   // changing the row values into zeros 
    }


    for(j=0;j<COL;j++)
    {
        a[j][m]=-1;
    }


    // a[0][m]=0;
    // a[1][m]=0;
    // a[2][m]=0;

    // a[n][0]=0;
    // a[n][1]=0;
    // a[n][2]=0;








}


int main()
{
    int i,j;
    int n=3;
    int m=3;

    int a[n][m];

    printf("Enter the values of the 3 x 3 matrix\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    printf("The entered array is\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                make(a,i,j);
            }
        }
    }

    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==-1)
            {
                a[i][j]=0;
            }
        }
    }


    printf("The changed array is\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


}