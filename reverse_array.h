#include<iostream>
#include<array>
using namespace std;

//func to print an array
void print_array(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<", ";
	}
	cout<<"\n";
}

//func to reverse an array
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
