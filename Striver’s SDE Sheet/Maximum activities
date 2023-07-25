#include<bits/stdc++.h>

bool cmp(pair<int,pair<int,int>> a,pair<int,pair<int,int>> b){
    if(a.second.first==b.second.first) return a.second.second<b.second.second;
    return a.second.first<b.second.first;
    
}

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,pair<int,int>>> v;
    for(int i=0;i<start.size();i++){
        v.push_back({start[i],{finish[i],i+1}});
    }
    sort(v.begin(),v.end(),cmp);
    int l=v[0].second.first;
    int c=1;
    for(int i=1;i<start.size();i++){
        if(v[i].first>=l){
            //cout<<"k"<<v[i].first<<endl;
            c++;
            l=v[i].second.first;
        }
    }
    return c;
}
