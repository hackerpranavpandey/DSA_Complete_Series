// Given an integer array of coins[ ] of size N representing different types of denominations and an integer sum, the task is to count all combinations of coins to make a given value sum.  
// Note: Assume that you have an infinite supply of each type of coin. 
// Examples: 
// Input: sum = 4, coins[] = {1,2,3}
// Output: 4
// Explanation: there are four solutions: {1, 1, 1, 1}, {1, 1, 2}, {2, 2}, {1, 3}
#include<bits/stdc++.h>
using namespace std;
// the problem with this code is that it will count each thing twice like {1,3} and {3,1} is different according to this algorithm
// int total_ways(int sum,int arr[]){
//     if(sum==0)
//         return 1;
//     else if(sum<0)
//         return 0;
//     // use first coin and then call the function recursively to use rest of the coins
//     int ways=0;
//     for(int i=0;i<n;i++){
//         ways+=total_ways(sum-arr[i],arr);
//     }
//     return ways;
// }
int total_ways(int sum,int arr[],int n){
    if(sum==0)
        return 1;
    else if(sum<0)
        return 0;
    if(n<=0)
        return 0;
    // use first coin and then call the function recursively to use rest of the coins
    // including n-1 th coin + excluding it
    return total_ways(sum-arr[n-1],arr,n)+total_ways(sum,arr,n-1); // recursion formula and then from here only we convert it to dp formula
}
int main(){
    int sum;
    cin>>sum;
    int coins[]={1,2,3};
    int n=sizeof(coins)/sizeof(coins[0]);
    int ans=total_ways(sum,coins,n);
    cout<<ans<<endl;
    return 0;
}