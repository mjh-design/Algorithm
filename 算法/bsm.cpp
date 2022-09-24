#include<iostream>
#include<vector>
using namespace std;
/*
适用于无重复元素且已经排好序的数组
*/

int bsm(vector<int>& arr,  int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int middle = (left + right) / 2;

    while(left <= right)
    {
         middle = (left + right) / 2;
        if (arr[middle] > target)  right = middle - 1;
        else if (arr[middle] < target) left = middle + 1;
        else return middle;  
    }
    return -1;

}
int main()
{
    vector<int> arr;
    arr.clear();
    int n, tmp, target;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    cin >> target;
    cout << bsm(arr, target) << endl;
}