#include<bits/stdc++.h>
using namespace std;


void sort(int a[],int n);

// void swap(int a,int b);

int kthlargest(int a[],int n,int k);

int main()
{
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>> n ;

    int a[n];

    


    cout<<"Enter the array element"<<endl;
    int i;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cout<<"Enter the kth largest element to be found"<<endl;
    cin>>k;

    int res = kthlargest(a,n,k);


    cout<<"The element is :"<<res<<endl;

    return 0;


}



int kthlargest(int a[],int n,int k)
{
    sort(a,n);

    int i;
    cout<<"The sorted array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return (a[k-1]);

}


void sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}


// void swap(int *a,int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// } 