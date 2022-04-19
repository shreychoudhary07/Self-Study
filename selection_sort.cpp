#include<iostream>
using namespace std ;

void selection_sort(int a[],int n)
{
    int i,j,k;

    for(int i=0;i<n-1;i++)
    {
        for(int j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            k=j;
        }
        swap(a[i],a[k]);

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

    selection_sort(a,n);
    cout<<"array after sort is : "<<endl;
    print_array(a,n);
}   