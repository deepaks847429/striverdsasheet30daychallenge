#include <iostream>

using namespace std;
void print(int **edge, int n, int sv, bool *visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0; i<n; i++){
        if(i==sv){
            continue;
        }
        if(edge[sv][i]==1){
            if(visited[i]){
                continue;
            }
            print(edge, n, i, visited);
        }
    }
}
int main()
{
    int n;
    int e;
    cin>>n>>e;
    int **edge=new int*[n];
    for(int i=0; i<n; i++){
        edge[i]=new int[n];
        for(int j=0; j<n; j++){
            edge[i][j]=0;
        }
    }
    for(int i=0; i<e; i++){
        int f, s;
        cin>>f>>s;
        edge[f][s]=1;
        edge[s][f]=1;
    }
    bool* visited=new bool[n];
    for(int i=0; i<n; i++){
        visited[i]=false;
    }
    print(edge, n, 0, visited);

    return 0;
}
