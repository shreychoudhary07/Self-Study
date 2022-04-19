#include <iostream>
using namespace std;

void bubblesort(int a[],int n)
{
    int temp;
   for (int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-1-i;j++)
       {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
       }
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
    int n;
    cout<<"enter the number of elements you want to put in the array"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    bubblesort(a,n);
    cout<<"sorted array is: "<<endl;
    print_array(a,n);
    return 0;
}