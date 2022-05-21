// #include<stdio.h>

// void display (int a[],int n);

// int main()
// {
//     int a[10] = {1,2,3,4,5,6,7,8};
//     int n=7;

//     display(a,n);
// }


// void display(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }
// }



// Linear search //

// #include<stdio.h>

// int lsearch(int arr[],int n,int ele);

// int main()
// {
//     int n;
//     printf("Enter the size of the array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the array elements\n");
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     printf("The entered elements are\n");
//     int i;
//     for (i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }

//     int ele;
//     printf("\nEnter the element to be searched\n");
//     scanf("%d",&ele);

//     int loc = lsearch(a,n,ele);

//     if(loc>=0)
//     {
//         printf("The element %d was found at the location %d\n",ele,loc);
//     }
//     else{
//         printf("The element was not found\n");
//     }
// }

// int lsearch(int a[],int n,int ele)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==ele)
//         {
//             return i;
            
//         }
//     }

//     return -1;
// }









// Binary search //

// #include<stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the size of the array\n");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the array elements\n");
//     int i;
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     printf("The array elements are\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);

//     }

//     int l=0;
//     int r=n-1;
//      int m=0;

//     printf("\nEnter the element to be searched\n");
//     int e;
//     scanf("%d",&e);

//     while(l<=r)
//     {
       
//         m = (l+r)/2;

//         if(a[m]==e)
//         {
//             printf("The element %d was found at the location %d \n",e,m);
//             return 0;

//         }

//         if (a[m]<e)
//         {
//             l=m+1;
//         }

//         if(a[m]>e)
//         {
//             r=m-1;
//         }

       
        
//     }

//     printf("The element was not found\n");
//     return -1;
// }







