#include<iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i =1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    
    cout<<"Unsorted Array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr, n);
    
    return 0;
}
