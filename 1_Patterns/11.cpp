// this one is last sequence
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
// So, what we can observe from the above examples is that on the perimeter 
// of the square, there is an integer no. N which decreases by 1 as we move inside
//  the square level-wise. Since this cannot be printed directly, we print it in reverse 
// fashion (0’s at the border of the square, then 1 in the inner perimeter, then 2, and so on ) 
// and then subtract the whole pattern by N at the end which just makes the outermost perimeter 
// filled with the number N, inner perimeter with N-1 and finally the centermost element with the integer 1.
// The outer and the inner loop will run for the same number of times ( since we have to print square) i.e, 
// 2*N-1 times and the inner loop would print the numbers based on the logic as described below ( for N = 4 ):
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            // logic is that for each index value it is minimum of distance from top bottom left or right then subtract it from n
            int top=i;
            int bottom=2*n-2-i;
            int right=j;
            int left=2*n-2-j;
            int min_distance=min(min(top,bottom),min(left,right));
            cout<<n-min_distance;
        }
        cout<<endl;
    }
    return 0;
}