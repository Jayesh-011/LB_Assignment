#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int iSize)
{
    T Maximum = 0;
    int i = 0;

    for(Maximum = arr[i] ; i < iSize ; i++)
    {
        if(arr[i] > Maximum)
        {
            Maximum = arr[i];
        }
    }

    return Maximum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0f,3.7f,9.8f,8.7f};

    int iMax = Max(arr,5);
    cout << iMax << endl;

    float fMax = Max(brr,4);
    cout << fMax << endl;

    return 0;
}