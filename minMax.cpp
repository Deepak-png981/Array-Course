
// C++ program of above implementation
#include<iostream>
using namespace std;
 
// Pair struct is used to return
// two values from getMinMax()
struct Pair
{
    int min;
    int max;
};
 
Pair getMinMax(int arr[], int n)
{
// ish function ko complete karo
    struct Pair minMax;
    
    
    if(n == 1)
    {
        minMax.min = arr[0];
        minMax.max = arr[0];
        return minMax;
    }
    // initialize
    if(arr[0]>arr[1]){
        minMax.min = arr[1];
        minMax.max = arr[0];
    }
    else{
        minMax.min = arr[0];
        minMax.max = arr[1];
    }
    // trace for loop
    for(int i = 2; i<n; i++){
        if(arr[i] > minMax.max){
            minMax.max = arr[i];
        }
        else if(arr[i]<minMax.min){
            minMax.min = arr[i];
        }

    }
    return minMax;

}
 
// Driver code
int main()
{
    int arr[] = { 1000, 11, 445,
                  1, 330, 99999 };
    int arr_size = 6;
     
    struct Pair minmax = getMinMax(arr, arr_size);
     
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
}