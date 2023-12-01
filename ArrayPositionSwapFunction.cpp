#include <iostream>
using namespace std;


void swap(int array[], int pos1, int pos2) {
    int temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;
}


void print_array(int array[], int size) {
    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << array[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int numbers[] = {1, 2, 3};

    cout << "Original Array: ";
    print_array(numbers, 3);

    swap(numbers, 0, 1);

    cout << "Array after swapping positions 0 and 1: ";
    print_array(numbers, 3);
}
