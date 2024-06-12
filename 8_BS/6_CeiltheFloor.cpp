// Problem statement
// You're given a sorted array 'a' of 'n' integers and an integer 'x'.
// Find the floor and ceiling of 'x' in 'a[0..n-1]'.
// Note:
// Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
// Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.

// below is the code to solve this question
// int index=lower_bound(a.begin(),a.end(),x)-a.begin();
// 	int floor=a[index],ceil=a[index];
// 	if(a[n-1]<x)
// 		ceil=-1;
// 	int low=0;
// 	int high=n-1;
// 	while(low<=high){
// 		int mid=(low+high)/2;
// 		if(a[mid]<=x){
// 			floor=a[mid];
// 			low=mid+1;
// 		}
// 		else{
// 			high=mid-1;
// 		}
// 	}
// 	if(a[0]>x)
// 		floor=-1;
// 	pair<int,int> ans={floor,ceil};
// 	return ans;