#include<iostream>
using namespace std;
int isFound(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;//this technique does not occur stack overflow
        int midele=arr[mid];
        if(target==midele)
        {
            return mid;
        }
        else if(target> midele)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[6]={10,20,30,40,60};
    if(isFound(arr,6,20))
    {
        cout<<"\nelement is found";
    }
    else
    {
        cout<<"\nelement is not found";
    }
}