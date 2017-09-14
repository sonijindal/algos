#include <iostream>

using namespace std;

void bubble (int *arr, int size)
{
    int i, j, temp, small, smallPos;
    for (i = size; i >= 0; --i) {
        for (j = 0; j < i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}

void selection (int *arr, int size)
{
    int i, j, temp, small, smallPos;
    for (i = 0; i < size; ++i) {
        small = arr[i];
        smallPos = -1;
        for (j = i+1; j < size; ++j) {
            if (arr[j] < small) {
                small = arr[j];
                smallPos = j;
            }
        }
        if (smallPos != -1) {
            arr[smallPos] = arr[i];
            arr[i] = small;
        }
    }

    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}

void insertion (int *arr, int size)
{
    int temp;
    int j;
    for (int i = 1 ; i < size; ++i) {
        int num = arr[i];
        for (j = i - 1; j >= 0; --j) {
            if (num < arr[j]) {
                arr[j+1] = arr[j];
            } else
                break;
        }
        if ( j < (i-1) )
            arr[j+1] = num;
    }

    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = { 0, 37, 27, 77, 57, 67, 9, 17};
    //insertion(arr, 8);
    //selection(arr, 8);
    bubble(arr, 8);
    cout << "Hello!" << endl;
    return 0;
}
