
#include <iostream>

using namespace std;


int ArrayMin(int Array[], size_t Size) {

	int Min = Array[0];

	for (int i = 0; i < Size; i++) {
		if (Array[i] < Min) {
			Min = Array[i];
		}
	}

	return Min;
}


int main()
{
    
}

