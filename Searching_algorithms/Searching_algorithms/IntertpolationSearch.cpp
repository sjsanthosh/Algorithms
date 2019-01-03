# include<iostream>
using namespace std;

int JumpSearch(int arr[], int n, int x) {

	int lo = 0, hi = n - 1;

	while (hi >= lo && x >= arr[lo] && arr[hi] >= x)
	{

		int pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo]))* (x - arr[lo]));
		if (arr[pos] == x)
			return pos;
		else if (arr[pos] > x)
			hi =pos-1;
		else
			lo =pos + 1;

	}
	return -1;
}
int main() {

	int arr[] = { 3,4,5,7,9,10,20,21,40 };
	int x = 21;
	int size = sizeof(arr) / sizeof(arr[0]);
	int result = JumpSearch(arr, size, x);
	if (result == -1)
		cout << "element not found";
	else
		cout << "Element found at " << result;

	getchar();
	return 0;

}