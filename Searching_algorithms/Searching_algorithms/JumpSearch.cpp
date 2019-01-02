# include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int JumpSearch(int arr[], int n, int x) {

	int step = sqrt(n);

	int prev = 0;

	while (arr[min(step, n) - 1] < x)
	{
		prev = step;
		step += sqrt(n);

		if (prev >= n)
			return -1;
	}



	while (arr[prev] < x) {
		prev++;

		if(prev== min(step,n))
		return -1;

	}
	if (arr[prev] == x)
		return prev;

	return -1;
}
int main() {


	int arr[] = { 3,4,5,7,9,10,20,21,40 };
	int x = 10;
	int size = sizeof(arr) / sizeof(arr[0]);
	int result = JumpSearch(arr, size, x);
	if (result == -1)
		cout << "element not found";
	else
		cout << "Element found at " << result;

	getchar();
	return 0;

}