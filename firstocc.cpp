#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector<int> v,int i,int target){
    if(i==v.size()){
        return -1;
    }

    if(v[i]==target){
        return i;
    }

    return firstocc(v, i+1, target);
}

int main(){
    vector<int> v = {1, 2, 3, 4, 3, 3};
    cout<<"The First Occurence Of The Given Target:-"<<firstocc(v, 0, 3);
}