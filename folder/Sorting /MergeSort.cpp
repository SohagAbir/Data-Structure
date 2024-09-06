#include<iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub) 
{
    int i = lb;       
    int j = mid + 1;   
    int k = lb;         
    int temp[ub + 1];    

    
    while (i <= mid && j <= ub) 
    {
        if (arr[i] <= arr[j]) 
        {
            temp[k] = arr[i];
            i++;
        } 
        else 
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    
    while (i <= mid) 
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    
    while (j <= ub) 
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    
    for (int t = lb; t <= ub; t++) 
    {
        arr[t] = temp[t];
    }
}

void mergeSort(int arr[], int lb, int ub) 
{
    if (lb < ub) 
    {
        int mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid);        
        mergeSort(arr, mid + 1, ub);    
        merge(arr, lb, mid, ub);        
    }
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Unsorted array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
