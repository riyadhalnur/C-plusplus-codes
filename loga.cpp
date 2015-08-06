#include <iostream>
using namespace std;


int linearSearch(int v[], int n, int value){  
     for(int i = 0; i < n; i++)  
         if(v[i] == value)  
             return 1;  
     return -1;  
 }  
   
int main(){  
     int v[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  
     cout << linearSearch(v, 9, 4) << endl;  
 }