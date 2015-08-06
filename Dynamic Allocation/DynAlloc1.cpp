#include <iostream.h>

int main() {
    int array[10]; // array of 10 elements

    int* dynamic_array;
    
    cout << "Enter a size for the array: ";
    int size;
    cin >> size;
    
    // allocate the array
    // In C :
    // dynamic_array = (int *)malloc(size * sizeof(int));
    dynamic_array = new int[size];
    
    // use the array
    for (int i = 0; i < size; i++) {
        dynamic_array[i] = i * i;
        cout << dynamic_array[i] << endl;
    }
    
    // deallocate the array
    // In C :
    // free(dynamic_array);
    delete[] dynamic_array;
    
    return 0;
}
