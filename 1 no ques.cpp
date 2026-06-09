#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_multiset<int>productid;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int id;
        cin>>id;
        productid.insert(id);
    }
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int x;
            cin>>x;
            cout<<productid.count(x)<<endl;
        }
        else if(type==2){
            int x;
            cin>>x;
            auto it=productid.find(x);
            if(it!=productid.end()){
                productid.erase(it);
            }
        }
        else if(type==3){
            int x;
            cin>>x;
            productid.erase(x);
        }
        else if(type==4){
            cout<<productid.size()<<endl;
        }
    }
    return 0;
}
