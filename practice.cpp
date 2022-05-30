#include<bits\stdc++.h>
using namespace std;

#define ROW 3
#define COL 3




// void make(int a[][COL],int i,int j)
void make(int *a,int i,int j )
{
    int n,m;
    for(n=0;n<ROW;n++)
    {
        a[i][n]=0;
    }

    for(n=0;n<ROW;n++)
    {
        a[n][j]=0;
    }


}



int main()
{
    int i,j;
    int n=3;
    int m=3;

    int a[n][m];

    cout<<"Enter the 3 x 3 array elements"<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {   
                cin>>a[i][j];

        }
    }

    cout<<"The array is"<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i];
        }
        cout<<endl;
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

    cout<<"The modified array is"<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }





}