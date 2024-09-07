#include <iostream>

using namespace std;

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int n = 5;
    int count = 0;

    for(int i = 0; i < n; i++) {
        int j = i;
        while(j >= 1) {
            if(arr[j] >= arr[j-1]) break;
            else {
                swap(arr[j], arr[j-1]);
            }
            j--;
            count++;
        }
    }

    cout << "The minimum no. of operations to sort the array in increasing order is: " << count << endl;
}