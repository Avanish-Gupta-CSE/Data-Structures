#include<iostream>
#include<set>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    //code
    vector<int> arr = {1, 2,2,3,3, 3,1,2 ,4, 5};

    unordered_set<int> s(arr.begin(), arr.end()); 
    for(auto x: s){
        cout << x << " ";
    }
    return 0;
}