//Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.

#include <iostream>

using namespace std;

int rotatee(int arr[],int n, int d)
{
    int i,b,a;
    for(a=0;a<d;a++)
    {
    b=arr[n-1];
    for(i=n-1;i>0;i--)
        arr[i]=arr[i-1];
    arr[0]=b;
    }

}

int printarray(int arr[],int n)
{
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int i,d,n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter value of d";
    cin>>d;
    rotatee(arr,n,d);
    printarray(arr,n);

    return 0;
}
