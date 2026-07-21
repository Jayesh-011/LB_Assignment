#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int i = 0;
    for(;i < iSize;i++)
    {
        if(arr[i] == iNo)
        {
            break;
        }
    }
 
    return i+1;
}

int main()
{
    int arr[]={11,20,30,10,30,40,10,40,10};

    int iRet = SearchFirst(arr,9,10);

    cout << iRet << endl;

    return 0;
}