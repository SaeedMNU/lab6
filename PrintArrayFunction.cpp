#include <iostream>
using namespace std;

void print_array(const int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int numbers[] = {1, 2, 3};
    print_array(numbers, 3);
}
