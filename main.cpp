#include <iostream>
using namespace std;

int Partition(int arr[], int p, int r)
{
    int x = arr[r];
    int i = p - 1;
    for(int j = p; j < r; j++)
    {
        if(arr[j] <= x)
        {
            i = i + 1;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;
    return i + 1;




}

void QuickSort(int arr[], int p, int r)
{
    if(p < r)
    {
        int q = Partition(arr, p, r);
        QuickSort(arr, p, q - 1);
        QuickSort(arr, q + 1, r);
    }

}

int main()
{
    int arr[] = {2, 8, 7, 1, 3, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, 7);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
