#include<iostream>
using namespace std;

int bin_search(int a[],int x , int low , int high)
{
 while(low<=high)
 {
   int mid=(low+high)/2;
   if(x==a[mid]){
       return mid;
   }
   else if (x<a[mid])
   {
      high=mid - 1;
   }

   else 
      low=mid +1;
 }
  return -1;
}

int main()
{
    int n,x;
    cout<<"Enter the number of elements you want to put in array"<<endl;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the value you want to search"<<endl;
    cin>>x;
int result=bin_search(a,x,0,(n-1));
if(result==-1)
{
    cout<<"element not found "<<endl;

}
else 
cout<<"element found successfully"<<endl;
}