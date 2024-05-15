// simple quick sort algorithm is here
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    // any element can be choosen as pivot 
    int pivot=arr[low]; // here low index is choosen but we can even choose high index element
    int i=low;
    int j=high;
    // how will i get the index correct for pivot in sorted array
    while(i<j){
        // if arr[i] is less than or equal to pivot and inside array increase i
        while(arr[i]<=pivot && i<high){
            i++;
        }
        // similar decrease j
        while(arr[j]>=pivot && j>low){
            j--;
        }
        // this is needed since it might get stuck like
        // {1,2,3,4,0} here i=0 then i=1 but 2>1 so it will not move 
        // similarly j=4 but 0<1 so it will also stuck so we need to swap them 
        // else program will get stuck at local maxima or minima
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    // now swap with arr[j]
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high){
    if(low < high){
        // idea is simple for each element this partition function will return its position in sorted array
        int partition_index=partition(arr,low,high);
        quicksort(arr,low,partition_index-1);
        quicksort(arr,partition_index+1,high);
    }
}
int main(){
    int arr[10]={1,2,8,10,4,6,1,3,5,-1000};
    quicksort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}