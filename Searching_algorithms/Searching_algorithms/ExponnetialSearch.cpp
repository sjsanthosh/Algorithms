# include<iostream>
using namespace std;
int BinarySearch_recursive(int arr[], int l, int r, int x) {

	if (r >= l) {

		int m = l + ((r - l) / 2);

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
int ExponentialSearch(int arr[], int n, int x) {

	if (arr[0] == x)
		return 0;

	int i = 1;
	while (i < n && arr[i] < x)
		i = i * 2;

		return BinarySearch_recursive(arr, i/2, i, x);

}


int main() {

	int arr[] = { 3,4,5,7,9,10,20,21,40 };
	int x = 21;
	int size = sizeof(arr) / sizeof(arr[0]);
	int result = ExponentialSearch(arr, size, x);
	if (result == -1)
		cout << "element not found";
	else
		cout << "Element found at " << result;

	getchar();
	return 0;

}