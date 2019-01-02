# include<iostream>
using namespace std;

int Linear_search(int arr[], int size, int x) {

	for (int i = 0; i < size;i++)
		if (x == arr[i])
			return i;

	return -1;
}
int main() {


	int arr[] = { 3,4,5,7,9,10,20,21,40 };
	int x = 10;
	int size = sizeof(arr) / sizeof(arr[0]);
	int result = Linear_search(arr, size, x);
	if (result == 1)
		cout << "element not found";
	else
		cout << "Element found at " << result;

	getchar();
	return 0;

}