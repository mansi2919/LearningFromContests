// Every night, Mario dreams of divisibility problems. In one such dream, Mario is given an array a of length n, and a number k. He performs as many operations as he wants to this array; in the end, he wants to make every element divisible by k.

// In a single operation, Mario selects two indices i and j (in particular, he can choose i=j), and does a[i]=a[i]+a[j].

// Help Mario decide if he can make everything divisible by k eventually, thus ending his dream.

// here what we have done is divided by 2 such that we are left with a odd number
// and if that odd numbr divides the array completely it means a yes else NO
//codechef
#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,k,temp,flag=0;
        cin>>n>>k;
        ll arr[n],i;
        for(i=0;i<n;i++)
            cin>>arr[i];
        temp=k;
        while(1){
            if(temp%2==0){
                temp = temp/2;
               }
            else
                break;
        }
        for(i=0;i<n;i++){
            if(arr[i]%temp!=0){
                cout<<"NO"<<"\n";
                flag++;
                break;
            }
        }
        if(flag==0)
            cout<<"YES"<<"\n";
    }
    return 0;
}
