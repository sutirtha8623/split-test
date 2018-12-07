#include<iostream>
#include<array>
#include"reverse_array.h"
using namespace std;

//this function is designed to split a number and put it into an array,
void split(int data, int length)
{
	int rem;
	int dat_arr[length];
	dat_arr[0] = data%10;
	for(int i =1; i<length;i++)
	{
		rem = data/10;
		dat_arr[i] = rem%10;  //continuous integer div and modulo div .
		data = rem;
	}
	reverse(dat_arr, 0, 6);
	print_array(dat_arr, 7);
}
//driver function
int main()
{
	int x = 4829345;
	split(x, 7);
}