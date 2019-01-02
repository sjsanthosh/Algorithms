# include<iostream>
using namespace std;

int BinarySearch_recursive(int arr[], int l, int r, int x) {

	if (r >= l) {
	
		int m = l + ((r-l) / 2);

		if (arr[m] == x)
			return m;
		else if (arr[m] > x)
			return BinarySearch_recursive(arr, l, m - 1, x);
		else if (arr[m] < x) {
			return BinarySearch_recursive(arr, m + 1, r, x);
		}

	}
	return -1;
	 
}

int BinarySearch_iterative(int arr[], int l, int r, int x) {

	while(l<=r)
	 {

		int m = l + ((r - l) / 2);

		if (arr[m] == x)
			return m;
		else if (arr[m] > x)
			r=m-1;
		else if (arr[m] < x) {
			l=m+1;
		}

	}
	return -1;

}
int main() {


	int arr[] = { 3,4,5,7,9,10,20,21,40 };
	int x = 10;
	int size = sizeof(arr) / sizeof(arr[0]);
	int result = BinarySearch_iterative(arr, 0, size - 1, x);
	if (result == -1)
		cout << "element not found";
	else
		cout << "Element found at " << result;

	getchar();
	return 0;

}