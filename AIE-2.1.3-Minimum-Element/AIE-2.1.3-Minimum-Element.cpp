
#include <iostream>
#include <cassert>

using namespace std;


int ArrayMin(int Array[], size_t Size) {			// Here i feed the size of the array in separately because it cannot be read from inside the function,
													// i do this by dividing the total data size of the array by the data size of any one item in the array
	int Min = Array[0];								// as all items in an array are the same amount of data.

	for (int i = 0; i < Size; i++) {				// This loop iterates through every item in the array and updates the Min int variable to a new value
		if (Array[i] < Min) {						// whenever it is smaller than its previous value.
			Min = Array[i];
		}
	}

	return Min;
}


int main()
{
   
	int IntArray[20] = {67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29};

	assert(ArrayMin(IntArray, sizeof(IntArray) / sizeof(IntArray[0])) == 2);

}

