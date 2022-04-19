#include<iostream>
using namespace std;

int linear_search(int a[],int key)
{
    int i,n;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        return i;

    }
    return -1;
}

int main(){
// 
//     int a[]={2,4,6,4,8};
//     int result = linear_search(a,1,5);
//     if(result==-1)
//     cout<<"element not found ";
//     else
//     cout<<"element is found ";
       int n;
      
       cout<<"enter the size of array"<<endl;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       int result = linear_search(a,1);
       if(result==-1)
       cout<<"element not found ";
       else
       cout<<"element is found ";

       


}