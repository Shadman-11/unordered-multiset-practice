#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int>bagA;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        bagA.insert(x);
    }
    int m;
    cin>>m;
    int commmon_count=0;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        auto it=bagA.find(x);
        if(it!=bagA.end()){
            commmon_count++;
            bagA.erase(it);
        }
    }
    cout<<"Total common duplicate elements="<<commmon_count<<endl;
    return 0;

}
