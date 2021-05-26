/*Code Merge Two Sorted Arrays
You have been given two sorted arrays/lists ( ARR1 and ARR2) of size N and M
respectively , merge them into a third array/list such that third array is also sorted.

Sample input :
1
5
1 3 4 7 11
4
2 4 6 13

Sample output :
1 2 3 4 4 6 7 11 13*/

#include<iostream>
using namespace std;

void merge_arr(int arr1[], int arr2[],int arr3[], int n1, int n2)
{
	int i=0,j=0,k=0;
	
	while(i<n1 && j<n2)
	{
		if(arr1[i]<arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}
	while(i<n1)
		arr3[k++] = arr1[i++];
	
	while(j<n2)
		arr3[k++] = arr2[j++];
		
}
int main()
{
	int arr1[]={1,3,4,7,11};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	
	int arr2[]={2,4,6,13};
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	
	int arr3[n1+n2];
	merge_arr(arr1, arr2, arr3, n1, n2);
	
	cout<<"Array after merging"<<endl;
	for(int i=0;i<(n1+n2);i++)
		cout<<arr3[i]<<"";
	return 0;
	
}
