/*
Given an array arr[]. 
Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements.
Do the mentioned change in the array in place.

Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) 
    {
         int n = arr.size();
         int j = 0; 
        // Move non-zero elements to the front
        for (int i = 0; i < n; i++) 
        {
        if (arr[i] != 0) 
            {
            arr[j++] = arr[i];
            }
        }

    // Fill the remaining positions with zeroes
    while (j < n) 
        {
        arr[j++] = 0;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
