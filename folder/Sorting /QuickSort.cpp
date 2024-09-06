#include<iostream>
using namespace std;

int Partion(int arr[] , int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end)
    {
        while(arr[start] <= pivot && start < ub)
            start++;
        while(arr[end] > pivot)
            end--;
        if(start < end)
            swap(arr[start],arr[end]);
    }
    swap(arr[lb],arr[end]);
    return end;
}

void QuickSort(int arr[], int lb, int ub)
{
    if (lb <ub)
    {
        int loc = Partion(arr, lb, ub);
        QuickSort(arr, lb, loc-1);
        QuickSort(arr, loc+1, ub);
    }
}
 
void printArray(int arr[], int n)
{
    for (int i=0; i < n; ++i)
        cout << arr[i] << " ";
    cout <<endl;
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

    QuickSort(arr, 0, n-1);

    cout<<"Sorted Array: ";
    printArray(arr, n);

    return 0;
}
