#include<iostream>
using namespace std;

int binarysearch(int a[],int k,int l,int u)
{
    if(l>u)
        return -1;
    int mid;
    mid=(l+u)/2;
    if (k==a[mid])
        return 1;
    else if(k<a[mid])
        binarysearch(a,k,l,mid-1);
    else if(k>a[mid])
        binarysearch(a,k,mid+1,u);
}

int main()
{
    int n,i,z,key;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Data:");
        scanf("%d",&a[i]);
    }
    printf("Enter the Search Key:");
    scanf("%d",&key);
    z=binarysearch(a,key,0,n-1);
    if(z==1)
        printf("Key Found\n");
    else
        printf("Key Not Found\n");
}