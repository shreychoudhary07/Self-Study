#include<iostream>
using namespace std ;

void printArray(int* A,int n )
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}


int partition(int A[],int low,int high)
{
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;

    do
    {
     while(A[i]<=pivot)
     {
         i++;
     }
     while(A[j]>pivot)
     {
         j--;
     }
     if(i<j)
     {
         temp=A[i];
         A[i]=A[j];
         A[j]=temp;
     }
    } while (i<j);
    
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quicksort(int A[],int low,int high)
{
    int partitionIndex;  //index of pivot after partition

    if(low<high)
    {
        partitionIndex=partition(A,low,high);
        quicksort(A,low,partitionIndex-1);   //sort left subarray
        quicksort(A,partitionIndex+1,high);      //sort right subarray
    }
}


int main()
{
    int A[]={10,40,30,70,20,50};
    int n =6;
    printf("Array befor sorting\n");
    printArray(A,n);
    quicksort(A,0,n-1);
    printf("Array after sorting\n");
    printArray(A,n);
    return 0;
}