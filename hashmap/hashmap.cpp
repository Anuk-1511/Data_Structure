#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    //insertion

    pair<string,int> p  = make_pair("anubhav", 3);
    m.insert(p);

    pair<string,int> pair2("kharwar" , 2);
    m.insert(pair2);

    m["kharwar"] = 1;

    m["kumar"] = 2;

    //find
    cout<<m["kumar"]<<endl;

    cout<<m.at("kharwar")<<endl;

    cout<<m.size()<<endl;

    //to check count
    cout<<m.count("kumar")<<endl;
    //earse


    // for(auto i :m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    //iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}
