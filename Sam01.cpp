#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=1;
        int i, j;
        vector<int> a;
        int data, size;
        int sum=0;
 
        cin>>size;
 
        while(size--){
            scanf("%d", &data);
            a.push_back(data);
        }
        sort(a.begin(), a.end());
 
        while(n<a.size()){
            for(i=0; i<a.size(); ++i){
                for(j=i+n; j<a.size(); ++j){
                    //cout<<"("<<i<<","<<j<<")"<<"->"<<a[j]-a[i]<<"\t";
                    sum += (a[j] - a[i]);
                }
                //cout<<endl;
            }
            n++;
        }
 
        cout<<sum<<endl;
    }
    return 0;
}
