#include<bits/stdc++.h>
using namespace std;

class graph{

    public:
    unordered_map<int,list<int> > adj;
    

    void adde(int u ,int v, bool dir)
    {
        adj[u].push_back(v);
        if(dir == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printadj(){
        for(auto i : adj)
        {
            cout<<i.first<<"->";
            for(auto j : i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
    }

};

int main()
{
    int n;
    cout<<"enter the no of nodes"<<endl;
    cin>>n;

    int m;
    cout<<"enter the no of edges" << endl;
    cin>>m;

    graph g;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.adde(u,v,0);
    }

    g.printadj();
    return 0;
}
