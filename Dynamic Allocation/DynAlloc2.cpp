#include <iostream.h>


int main() {
    int array2d[10][10]; 
    // two dimentional static array of 10x10 elements

    // two dimentional dynamic array of n x n elements
    int** dynamic_array2d;
    
    cout << "Enter the row size for the 2d array: ";
    int rsize;
    cin >> rsize;

    cout << "Enter the col size for the 2d array: ";
    int csize;
    cin >> csize;
    
    // allocate the 2d array
    dynamic_array2d = new int*[rsize]; 
    for (int i = 0; i < rsize; i++) {
        dynamic_array2d[i] = new int[csize];
    }
    
    // use the 2d array
    for (i = 0; i < rsize; i++) {
        for (int j = 0; j < csize; j++) {
            dynamic_array2d[i][j] = i * j;
            cout << dynamic_array2d[i][j] << ' ';
        }
        cout << endl;
    }
    
    // deallocate the 2d array
    for (i = 0; i < rsize; i++) {
        delete[] dynamic_array2d[i];
    }
    delete[] dynamic_array2d;
    
    return 0;
}
