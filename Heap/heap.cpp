#include<iostream>
using namespace std;

class heap
{   public:
    int arr[100];
    int size;
    int capacity;
    
    heap()
    {
        size= 0;
        arr[0] = -1;
    }
    void insert(int val)
    {
      size = size+1;
      int index = size;
      arr[index]=val;

        while(index>1)
        {
            int parent = index/2;
            if(arr[parent]<arr[index])
            {
                int temp = arr[parent];
                arr[parent]=arr[index];
                arr[index]=temp;
            }
            else
            {
                break;
            }
            index = parent;
        }
    }

    void deleteh(){


        if(size ==0)
        {
            cout<<"heap is empty"<<endl;
            return;
        }
        int last = arr[size];
        arr[1] = last;
        size = size-1;
        int index = 1;
        while(index<size)
        {
            int left = 2*index;
            int right = 2*index+1;
            int largest = index;
            if(left<=size && arr[left]>arr[largest])
            {
                largest = left;
            }
            if(right<=size && arr[right]>arr[largest])
            {
                largest = right;
            }
            if(largest == index)
            {
                break;
            }
            int temp = arr[largest];
            arr[largest] = arr[index];
            arr[index] = temp;
            index = largest;
        }
    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

void heapify(int arr[],int n ,int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+1;
    if(left<n && arr[left]>arr[largest])
    {
        largest = left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest = right;
    }
    if(largest != i)
    {
        int temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;
        heapify(arr,n,largest);
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteh();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n =5; 
    for(int i=n/2 ; i>0; i--)
    {
        heapify(arr,n,i);
    }

    cout<<"heapify"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
