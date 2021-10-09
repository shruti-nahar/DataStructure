// C++ implementation of the above approach

#include <bits/stdc++.h>
using namespace std;

const int M = 3;
const int N = 3;

// A utility function
// to swap the two element
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Function to reverse
// the given 2D arr[][]
void reverseArray(int arr[M][N])
{

	// Traverse each row of arr[][]
	for (int i = 0; i < M; i++) {

		// Initialise start and end index
		int start = 0;
		int end = N - 1;

		// Till start < end, swap the element
		// at start and end index
		while (start < end) {

			// Swap the element
			swap(&arr[i][start],
				&arr[i][end]);

			// Increment start and decrement
			// end for next pair of swapping
			start++;
			end--;
		}
	}

	// Print the arr[][] after
	// reversing every row
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

// Driver Code
int main()
{
	int arr[][3] = { { 1, 2, 3 },
					{ 4, 5, 6 },
					{ 7, 8, 9 } };

	// Function call
	reverseArray(arr);
	return 0;
}
