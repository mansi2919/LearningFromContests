// Programmer's Army String Contest
// Mai Hu Jiyaaan - the goal is to input the sentence as different string words in a vector
#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<string>vs;
    string temp;
    while(cin>>temp){
        vs.push_back(temp);
    }
    for(auto it = vs.begin();it!=vs.end();it++)
        cout<<*it<<endl;
    return 0;
}