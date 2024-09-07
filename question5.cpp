#include <iostream>
#include <climits>

using namespace std;

float max(float a, float b) {
    if(a>=b) return a;
    else return b;
}

float min(float a, float b) {
    if(a<b) return a;
    else return b;
}

int main() {
    int arr[] = {5,3,10,3};
    int n = 3;

    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);

    bool flag = true;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] >= arr[i+1]) {
            kmin = max(kmin, (arr[i] + arr[i+1])/2);
        }
        else {
            kmax = min(kmax, (arr[i] + arr[i+1])/2);
        }
        if(kmin > kmax) {
            flag = false;
            break;
        }
    }

    if(flag == false) {
        cout << -1 << endl;
    }
    else if(kmin == kmax) {
        if(kmin-(int)kmin==0) {
            cout << "There is only one value of K: " << kmin << endl;
        }
        else cout << -1 << endl;
    }

    else {
        if(kmin-(int)kmin > 0) {
            kmin = (int)kmin + 1;
        }
        cout << "The possible value of k lies in the range: "<< kmin << " to " << kmax << endl;
    }
}