// C++ program for reversal algorithm
// of array rotation
#include <bits/stdc++.h>
using namespace std;

/*Function to reverse arr[] from index start to end*/
void reverseArray(int arr[], int start, int end)
{
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

/* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n)
{
	if (d == 0)
		return;
	// in case the rotating factor is
	// greater than array length
	d = d % n;

	reverseArray(arr, 0, d - 1);
	reverseArray(arr, d, n - 1);
	reverseArray(arr, 0, n - 1);
}

// Function to print an array
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

/* Driver program to test above functions */
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int d = 2;

    int a[n]={0};

    int i;

    //a[0] = arr[0];
    for(i=1;i<n;i++)
    {
        a[i-1]=arr[i];
    }

    //printArray(a,n-1);

    cout<<endl;
	// Function calling
	leftRotate(a, d, n-1);
    // cout<<arr[0]<<printArray(a,n-1)<<endl;
    cout<<arr[0]<<" ";
    printArray(a,n-1);
	//printArray(a, n-1);

	return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//    int a[7] = {1,2,3,4,5,6,7};

//    int b[7];

//    int n = sizeof(a)/sizeof(a[0]);

//    for(int i=0;i<n;i++)
//    {
//        b[i] = a[i+2];
//    }

//    b[n-2] = a[0];
//    b[n-1] = a[1];

//    cout<<"The changed array is"<<endl;

//    for(int j=0;j<n;j++)
//    {
//        cout<<b[j]<<endl;

//    }

//    return 0;

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[7] = {1,2,3,4,5,6,7};
//     int b[7];

//     int i,n;
//     n = sizeof(a)/sizeof(a[0]);

//     int j=0;

//     for(i<n;i>=0;i--)
//     {
//         b[j]=a[i];
//         j++;
//     }

//     for(i=0;i<n;i++)
//     {
//         cout<<b[i]<<endl;
//     }

//     for(i=n-1;i>=0;i--)
//     {
//         cout<<a[i]<<endl;
//     }

// }

// Disarium number

// #include<bits/stdc++.h>
// using namespace std;

// int count(int n)
// {
//     int c=0;
//     while(n!=0)
//     {
//         n = n/10;
//         c++;
//     }
//     return c;
// }

// int disarimu(int a)
// {
//     int nn = count(a);

//     int s = 0;
//     int j = a;

//     while(a)
//     {
//         int r = a%10;

//         s = s + pow(r,nn--);

//         a = a/10;
//     }

//     return s;

// }

// int main()
// {
//    int n,a,i;
//    cout<<"Enter the number"<<endl;
//    cin>>a;
//    n = count(a);
//    cout<<n<<endl;
//    int res = disarimu(a);

//    if (res == a)
//    {
//        cout<<"Yes"<<endl;
//    }

//    else{
//        cout<<"No"<<endl;
//    }

// }

// #include<iostream>
// using namespace std;

// int bsearch(int a[],int n);

// int main()
// {
// 	int n;
// 	cout<<"Enter the array size"<<endl;
// 	cin>>n;

// 	int a[n];
// 	int i;
// 	cout<<"Enter the array elements"<<endl;

// 	for(i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}

// 	int res = bsearch(a,n);

// 	if(res)
// 	{
// 		cout<<"Found the element\n"<<endl;
// 	}

// 	else{
// 		cout<<"The element was not found"<<endl;
// 	}

// 	return 0;

// }

// int bsearch(int a[],int n)
// {
// 	int l,r,m;
// 	l=0;
// 	r=n-1;

// 	int key;

// 	cout<<"Enter the element to be found"<<endl;
// 	cin>>key;

// 	while(l<=r)
// 	{
// 		m=(l+r)/n;

// 		if(a[m]==key)
// 		{
// 			return 1;
// 			break;
// 		}

// 		else if(a[m]>key)
// 		{
// 			 r = m-1;
// 		}

// 		else if(a[m]<key)
// 		{
// 			l=m+1;
// 		}
// 	}

// 	return 0 ;

// }

// GET, INSERT and UPDATE for 2D array

// #include<iostream>
// using namespace std;

// void get(int a[][3],int ri,int ci);

// void insert(int a[][3],int ri,int ci,int val);

// void update(int a[][3],int ri,int ci,int val);

// void printarray(int a[][3]);

// int main()
// {
// 	int a[3][3]={{0,0},{0,0},{0,0}};
// 	//{{1,2},{3,4},{5,6}}

// 	cout<<"Printing the array without inserting anything"<<endl;

// 	printarray(a);

// 	insert(a,0,0,1);
// 	insert(a,0,1,2);
// 	insert(a,0,2,3);
// 	insert(a,1,0,4);
// 	insert(a,1,1,5);
// 	insert(a,1,2,6);
// 	insert(a,2,0,7);
// 	insert(a,2,1,8);
// 	insert(a,2,2,9);

// 	cout<<"Printing array after inserting values in it"<<endl;

// 	printarray(a);

// 	cout<<"getting some array elements"<<endl;

// 	get(a,0,2);
// 	get(a,2,1);

// 	cout<<"Updating values of the array"<<endl;

// 	update(a,0,0,9);
// 	update(a,2,2,0);

// 	cout<<"Checking updated values"<<endl;

// 	get(a,0,0);
// 	get(a,2,2);

// 	cout<<"Printing the final array"<<endl;

// 	printarray(a);

// }

// void get(int a[][3],int ri,int ci)
// {
// 	cout<<"The array at the index"<<ri<<","<<ci<<"is "<<a[ri][ci]<<endl;

// }

// void insert(int a[][3],int ri,int ci,int val)
// {
// 	a[ri][ci]=val;
// 	cout<<"inserted"<<endl;
// }

// void update(int a[][3],int ri,int ci,int val)
// {
// 	a[ri][ci] = val;

// 	cout<<"Updated"<<endl;
// }

// void printarray(int a[][3])
// {
// 	cout<<"elements are"<<endl;
// 	int i,j;

// 	for(i=0;i<3;i++)
// 	{
// 		for(j=0;j<3;j++)
// 		{
// 			cout<<a[i][j]<<"\t";
// 		}
// 		cout<<"\n";
// 	}
// }

// Move all the zeros with keeping non-zero elements position relative

// #include<iostream>
// using namespace std;

// void printArr(int a[],int n);

// void moveZeros(int a[],int n);

// void printArr(int a[],int n);

// int main()
// {
// 	int n=6;
// 	int a[n] = {0,4,1,0,5,2};

// 	cout<<"Before"<<endl;
// 	printArr(a,n);

// 	moveZeros(a,n);

// 	cout<<"After"<<endl;

// 	printArr(a,n);
// }

// void printArr(int a[],int n)
// {
// 	for(int i=0;i<n;i++)
// 	{
// 		cout<<a[i]<<"\t";
// 	}

// 	cout<<endl;
// }

// void moveZeros(int a[],int n)
// {
// 	int i,c=0;

// 	for(i=0;i<n;i++)
// 	{
// 		if(a[i]!=0)
// 		{
// 			a[c]=a[i];
// 			c++;
// 		}

// 	}

// 	for(i=c;i<n;i++)
// 	{
// 		a[i]=0;
// 	}
// }

// Removing duplicates elements from sorted array and returning the new length

// #include<iostream>
// using namespace std;

// int removeDup(int a[],int n);

// int main()
// {
// 	int n=7;
// 	int a[7] ={1,2,2,3,5,5,9};

// 	int nl = removeDup(a,n);

// 	cout<<"The new length is "<<nl<<endl;
// 	return 0;
// }

// int removeDup(int a[],int n)
// {
// 	int i=0;
// 	int j;

// 	for(j=1;j<n;j++)
// 	{
// 		if(a[i]!=a[j])
// 		{
// 			i++;
// 			a[i] = a[j];
//             //i++;   Do not do this,
// 		}
// 	}

// 	return i+1;
// }








// #include <iostream>
// using namespace std;

// void rotate(int mat[3][3]);
// void printmatrix(int mat[3][3]);
// void flipd(int a[3][3]);
// void fliph(int a[3][3]);



// int main()
// {
// 	int n, m = 3;

// 	int a[n][m];

// 	cout << "Enter the matrix elements" << endl;

// 	int i, j;

// 	for (i = 0; i < n; i++)
// 	{
// 		for (j = 0; j < m; j++)
// 		{
// 			cin >> a[i][j];
// 		}
// 	}

// 	cout << "Before flipping" << endl;

// 	printmatrix(a);

// 	rotate(a);

// 	cout << "After flipping" << endl;
// 	printmatrix(a);

// 	return 0;
// }



// void printmatrix(int a[3][3])
// {
// 	for(int i=0;i<3;i++)
// 	{
// 		for(int j=0;j<3;j++)
// 		{
// 			cout<<a[i][j];
// 		}

// 		cout<<endl;
// 	}
// }


// void rotate(int mat[3][3])
// {
// flipd( mat);
// fliph(mat);
// }

// void flipd(int mat[3][3])
// {
// 	int i,j;

// 	int len = sizeof(mat)/sizeof(mat[0][0]);

// 	for(i=0;i<len-1;i++)
// 	{
// 		for(j=0;j<len-i-1;j++)
// 		{
// 			int curr = mat[i][j];
// 			mat[i][j] = mat[len-j-1][len-i-1];
// 			mat[len-j-1][len-i-1] = curr;
// 		}
// 	}
// }


// void fliph(int mat[3][3])
// {
// 	int i,j,curr;
// 	int len = sizeof(mat)/sizeof(mat[0][0]);

// 	for(i=0;i<len/2;i++)
// 	{
// 		for(j=0;j<len-1;j++)
// 		{
// 			curr = mat[i][j];
// 			mat[i][j] = mat[len-i-1][j];
// 			mat[len-i-1][j] = curr;


// 		}
// 	}
// }

























