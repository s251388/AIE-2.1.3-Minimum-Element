
#include <iostream>
#include <cassert>
using namespace std;

int MinimumElement(int Array[], size_t Size) {
	int Smallest = Array[0];
	for (int i = 0; i < Size; i++) {
		if (Array[i] < Smallest) {
			Smallest = Array[i];
		}
	}
	return Smallest;
}

int main()
{
	int IntArray[20] {67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29};
	size_t ArraySize = sizeof(IntArray) / sizeof(IntArray[0]);

	assert(MinimumElement(IntArray, ArraySize) == 2);
}