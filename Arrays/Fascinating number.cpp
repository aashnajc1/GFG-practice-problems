//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
#include <string>
class Solution{
public:
	
	bool fascinating(int n) {
	    int n_2 = n*2;
	    int n_3 = n*3;
	    string n1 = to_string(n);
	    string n2 = to_string(n_2);
	    string n3 = to_string(n_3);
	    
	    string prod = n1+n2+n3;
	    string s = "123456789";
	    sort(prod.begin(),prod.end());
	    if(prod == s){
	        return true;
	    }
	    return false;
	    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends
