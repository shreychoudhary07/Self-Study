#include<iostream>
using namespace std ;

void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int x=a[i];
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=x;
    }
}

void print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i]<<endl;
    }
}
int main()
{
    int n ;
    cout<<"enter the number of elements you want to put in the array"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    insertion_sort(a,n);
    cout<<"array after sort is : "<<endl;
    print_array(a,n);
}   