// ramnitcode27
// Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element key. The task is to find the index of the given element key in the array A.

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // Time Complexity: O(N)
    int searchN(int a[], int l, int h, int key){
        for(int i=0;i<h-l+1;i++)
            if(a[i]==key)
                return i;
        return -1;
    }
    
    // Time Complexity: O(log N).
    // Auxiliary Space: O(1).
    int search(int arr[], int l, int h, int key){
        if (l > h)
            return -1;
 
        int mid = (l + h) / 2;
        if (arr[mid] == key)
            return mid;
 
        if (arr[l] <= arr[mid]) {
            if (key >= arr[l] && key <= arr[mid])
                return search(arr, l, mid - 1, key);
            return search(arr, mid + 1, h, key);
        }
 
        if (key >= arr[mid] && key <= arr[h])
            return search(arr, mid + 1, h, key);
 
        return search(arr, l, mid - 1, key);
    }
};

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}