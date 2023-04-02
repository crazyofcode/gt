/*
#include <iostream>
using namespace std;
int temp[1024];
int func(int n)
{
    int i=0;
    int numb;
    if(n==1||n==2||n==3)
        return 1;
    else 
    {
        if(n<=i)
            return temp[n];
        else
        {
            numb=func(n-3)+func(n-2)+func(n-1);
            temp[i++]=numb;
            return numb;
        }
    }
}
int main()
{
    int n;
    int imag;
    cin>>n;
    imag=func(n);
    cout<<imag<<endl;
}
*/
#if 0
#include <iostream>
#include <algorithm>

void Merge(int arr[],const int left,const int mid,const int right)
{
    const int subarrayone = mid - left +1; //length of array
    const int subarraytwo = right - mid;

    int *leftArray = new int[subarrayone];      //分别保存左右两个数组
    int *rightArray = new int[subarraytwo];         //用于临时存放

    for(int i=0;i<subarrayone;i++)
    {
        leftArray[i] = arr[left+i];
    }
    for(int j=0;j<subarraytwo;j++)
    {
        rightArray[j] = arr[mid+j+1];
    }

    int indexofsubarrayone = 0;
    int indexofsubarraytwo = 0;
    int indexofMegerarray = left;

    while(indexofsubarrayone < subarrayone && indexofsubarraytwo < subarraytwo)
        {
            if(leftArray[indexofsubarrayone] <= rightArray[indexofsubarraytwo])
            {
                arr[indexofMegerarray] = leftArray[indexofsubarrayone];
                indexofsubarrayone++;
            }
            else {
                arr[indexofMegerarray] = rightArray[indexofsubarraytwo];
                indexofsubarraytwo++;
            }
            indexofMegerarray++;
        }

        while(indexofsubarrayone < subarrayone)
        {
            arr[indexofMegerarray] = leftArray[indexofsubarrayone];
            indexofMegerarray++;
            indexofsubarrayone++;
        }
        while(indexofsubarraytwo < subarraytwo)
        {
            arr[indexofMegerarray] = rightArray[indexofsubarraytwo];
            indexofMegerarray++;
            indexofsubarraytwo++;
        }

        delete[] leftArray;
        delete[] rightArray;
}
void Mergesort(int arr[],const int left,const int right) //divide form left to mid and from mid+1 to right
{
    if(left >= right) return;
    int mid = (right - left) / 2 + left;
    Mergesort(arr,left,mid);
    Mergesort(arr,mid + 1,right);
    Merge(arr,left,mid,right);
}
int main()
{
    int sum;
    std::cin>>sum;
    int arr[sum];
    for(int i=0;i<sum;i++)
    {
        std::cin>>arr[i];
    }
    Mergesort(arr,0,sum-1);
    for(int i=0;i<sum;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
#endif
#if 0
// C++ program for Merge Sort
#include <iostream>
using namespace std;
  
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid,
           int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
  
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
  
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
  
    auto indexOfSubArrayOne
        = 0, // Initial index of first sub-array
        indexOfSubArrayTwo
        = 0; // Initial index of second sub-array
    int indexOfMergedArray
        = left; // Initial index of merged array
  
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
  
// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
  
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
  
// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}
  
// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    auto arr_size = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Given array is \n";
    printArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);
  
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
  
// This code is contributed by Mayank Tyagi
// This code was revised by Joshua Estes
#endif