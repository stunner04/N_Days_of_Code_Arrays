#include<bits/stdc++.h>
using namespace std;

vector<int>  moveZeros( vector<int> &v){

int nonZero = 0;
for(int i = 0 ; i<v.size() ;i ++){
    if(v[i]!=0){
        swap(v[i],v[nonZero]);
        nonZero++;
    }
}
return v ;
}
int main(){
    vector<int> v ;
    for(int i = 0 ;i< v.size() ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(auto ans : moveZeros(v)){
        cout<<ans<<"/n";
    }
}
