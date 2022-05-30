// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        
        int a[n];
        int b[n];
        int p=0;
        int nn=0;
        
        int i;
        
        for(i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                a[p]=arr[i];
                p++;
            }
            
            else
            {
                b[nn]=arr[i];
                nn++;
            }
        }
        int j=0;
        
        // for(i=0;i<p;i++)
        // {
        //     arr[i] = a[i];
        // }
        
        // for(i=p;i<p+nn;i++)
        // {
        //     arr[i]=b[i];
        // }
        
        int k=0;
        
        
        
        for(i=0;i<n;i++)
        {
            if(i<p)
            {
                arr[i]=a[j];
                j++;
            }
            if(i>=p)
            {
                arr[i]=b[k];
                k++;
            }
        }
        
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends