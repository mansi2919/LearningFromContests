// You have a binary string s of length N.

// What is the length of the shortest subsequence of s that needs to be erased for the resulting string to be non-decreasing?

//Solution - we will create a suffix array for ones and after that we will traverse the array from start to end -
//if we get 0 - we increment number of zeroes else we update the result by max(res, zeroes+arr[i])
// here arr[i] it contains the value of suffix array

// basically this will give us the value of longest sorted binary subsequence ignoring all the misplaces ones and zeroes.
#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n] ={0}, temp=0, res=0, zero=0,i;
        string str;
        cin>>str;
        for(i=n-1;i>=0;i--){
            if(str[i]=='1'){
                temp++;
                arr[i] = temp;
            }
        }
        for(i=0;i<n;i++){
            if(str[i]=='0')
                zero++;
            if(str[i] == '1')
                res = max(res, zero+arr[i]);
        }
        res = max(res,zero);
        cout<<n - res<<"\n";
    }
    return 0;
}
