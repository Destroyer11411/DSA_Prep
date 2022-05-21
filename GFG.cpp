
// // Reversing the given string 

// { Driver Code Starts
//Initial Template for C++


// #include<bits/stdc++.h>
// using namespace std;


// string reverseWord(string str);


// int main() {
	
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	string s;
// 	cin >> s;
	
// 	cout << reverseWord(s) << endl;
// 	}
// 	return 0;
	
// }

// // } Driver Code Ends


// //User function Template for C++

// string reverseWord(string str){
    
// //   int n = str.length();
// //   int i;
   
// //   for(i=0;i<=n/2;i++)
// //   {
// //       swap(str[i],str[n-i-1]);
// //   }
   
   
//    reverse(str.begin(),str.end());
//    return str;
    
//   //Your code here
// }








// FInding the Kth smallest element


// { Driver Code Starts
//Initial function template for C++

// #include<bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// //User function template for C++

// class Solution{
//     public:
//     // arr : given array
//     // l : starting index of the array i.e 0
//     // r : ending index of the array i.e size-1
//     // k : find kth smallest element and return using this function
//     int kthSmallest(int arr[], int l, int r, int k) {
//         //code here
        
//         sort(arr,arr + (r+1));
//         return arr[k-1];
//     }
// };

// // { Driver Code Starts.
 
// int main()
// {
//     int test_case;
//     cin>>test_case;
//     while(test_case--)
//     {
//         int number_of_elements;
//         cin>>number_of_elements;
//         int a[number_of_elements];
        
//         for(int i=0;i<number_of_elements;i++)
//             cin>>a[i];
            
//         int k;
//         cin>>k;
//         Solution ob;
//         cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
//     }
//     return 0;
// }  // } Driver Code Ends




// Finding Frequency of an number

// { Driver Code Starts
//Initial Template for C++
// #include <bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// //User function Template for C++

// /*Function to find frequency of x
// * x : element whose frequency is to be found
// * v : input vector
// */
// int findFrequency(vector<int> v, int x){
//     // Your code here
    
//      int o=0;
    
    
    
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]==x)
//         {
//             o = o+1;
//         }
//     }
    
//     return o;
// }

// // { Driver Code Starts.
// int main() {
	
// 	int testcase;
	
// 	cin >> testcase;
	
// 	while(testcase--){
// 	    int N;
// 	    cin >> N;
	    
// 	    // Declaring vector 
// 	    vector<int> v;
	        
// 	    // Taking vector element input
// 	    for(int i = 0;i<N;i++){
// 	        int k;
// 	        cin >> k;
// 	        v.push_back(k);
// 	    }
	    
// 	    // element whose frequency to be find
// 	    int x;
// 	    cin >> x;
// 	    cout << findFrequency(v, x) << endl;
// 	}
	
// 	return 0;
// }  // } Driver Code Ends