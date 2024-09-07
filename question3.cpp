#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[] = {5,2,4,7,3,1,6};
    int n = 7;
    int k;
    cout << "Enter the value for k: ";
    cin >> k;
    cout << endl;

    for(int i = 0; i < k; i++) {
        int min = INT_MAX;
        int mindx = -1;
        for(int j = i; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << "\nThe "<< k << " smallest element in the array is: " << arr[k-1] << endl;
}