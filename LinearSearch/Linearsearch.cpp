#include<iostream>
using namespace std;
bool isfound(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[6]={4,70,33,27,55,29};
    if(isfound(arr,6,70))
    {
        cout<<"\nelement found";
    }
    else
    {
        cout<<"\nelement not found";
    }
}