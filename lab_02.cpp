

//......problem-bubble_sort...............
/*
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, int &cmp, int &excng) {
    cmp = 0;
    excng = 0;
    bool swp;
    for (int i = 0; i < n-1; i++) {
        swp = false;
        for (int j = 0; j < n-i-1; j++) {
            cmp++;
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                excng++;
                swp = true;
            }
        }
        if (!swp) break;
    }
}

int main() {
    int arr[] = {92, 82, 21, 16, 18, 95};
    int n = sizeof(arr)/sizeof(arr[0]);
    int cmp, excng;

    bubbleSort(arr, n, cmp, excng);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if(i<n-1)
     cout << ", ";
    }
    cout << endl;

    cout << "Number of comparisons = " << cmp << endl;
    cout << "Number of exchanges = " << excng << endl;

    return 0;
}
*/
//...........problem- binary_search.............


#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + right;

        if (arr[mid] == target) {
            cout << target << " found at index " << mid << endl;  return;      }
        else if (arr[mid] < target) {
            left = mid + 1;

        }
        else {
            right = mid - 1;
        }
    }
    cout << target << " not found in the array" << endl;
}

int main() {
    int arr[] = {16, 18, 21, 82, 92, 95};
    int n = sizeof(arr)/sizeof(arr[0]);

    binarySearch(arr, n, 21);

    return 0;
}

