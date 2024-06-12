// same here but printing subset using bitwise concept
// now if there are n elements in an array then 2**n subsets
// so idea is to iterate from i=0 to i<2^n and if j th bit is 1 then that element is in subset else not
// like for 001 first two ar not but third is in subset
#include <bits/stdc++.h>
using namespace std;
void printSubsets(int *arr, int n) {
    int count=pow(2,n);
    for (int i=0;i<count;i++) {
        for (int j=0;j<n;j++) {
            // one way is to convert i to n bit representation and include only that element that bit is 1 like 0101 include ony 2 and 4
            if (i & (1<<j)) {  // simply left shift 1 by j position take and with i will tell to either include or exclude
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int arr[]={1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    printSubsets(arr, n);
    return 0;
}