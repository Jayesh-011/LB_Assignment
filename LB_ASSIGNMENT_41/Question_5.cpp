#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T Minimum = 0;
    int i = 0;

    for(Minimum = arr[i] ; i < iSize ; i++)
    {
        if(arr[i] < Minimum)
        {
            Minimum = arr[i];
        }
    }

    return Minimum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0f,3.7f,9.8f,8.7f,2.3f};

    int iMax = Min(arr,5);
    cout << iMax << endl;

    float fMax = Min(brr,5);
    cout << fMax << endl;

    return 0;
}