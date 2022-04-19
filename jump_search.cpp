#include<iostream>
#include<math.h>
using namespace std;

int jump_search(int a[],int element , int size)
{
    int low=0;
    int jump=pow(size,0.5);
    for(int i=0;i<size;i+=jump)
    {
        if(a[i]==element)
          return i;
        if(a[i]<element)
          low=i;
        else
        {
            return -1;
        }
          
    }

    for(int i=0;i<size;i++)
    {
        if(a[i]==element)
        return i;
        else 
        {
        return -1;
        }
    }

}

int main()
{
    int n,x;
    cout<<"enter the number of element you want to put in your array"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    cout<<"Enetr the element you want to search"<<endl;
    cin>>x;

    int result = jump_search(a,x,n-1);
    if(result==-1)
    {
        cout<<"element not found ";
    }
    else
    {
        cout<<"element found";
    }

}