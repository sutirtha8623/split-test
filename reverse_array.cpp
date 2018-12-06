#include<iostream>
using namespace std;

void print_array(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<", ";
	}
	cout<<"\n";
}

void reverse(int arr[], int start, int end)
{
	while(start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main()
{
	int arr[]{1,2,3,4,5,6,7};
	print_array(arr, 7);
	reverse(arr, 0, 6);
	print_array(arr, 7);
}