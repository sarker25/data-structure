#include <iostream>
#include <cmath>
using namespace std;
int arr[] = {14, 23, 36, 40, 53, 68, 79, 82, 91, 100};
int item = 101;

int main (){
    int left, right, middle;
    left = 0;
    right = (sizeof(arr) / sizeof(arr[0])) - 1;
    while (left <=right)
    {
        middle = (left + right) / 2;
        if(arr[middle] == item){
            cout << "Item found at position " << middle+1;
            return 0;
        }else if( arr[middle] < item){
            left = middle + 1;
        }else {
            right = middle - 1;
        }
    }
    cout << "Items not found";
    return 0;
}