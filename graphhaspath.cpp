/*#include <iostream>
using namespace std;
bool haspathhelper(int** edges, int n, int start, int end, bool* visited){
    if(start==end){
        return true;
    }
    visited[start]=true;
    for(int i=0; i<n; i++){
        if(edges[start][i] && !visited[i]){
            if(haspathhelper(edges, n , i, end, visited)){
                return true;
            }
        }
    }
    return false;
}
bool haspath(int** edges, int n, int start, int end){
    bool* visited=new bool[n];
    return haspathhelper(edges, n, start, end, visited);


}
int main() {
    // Write your code here
    int n;
    int e;
    cin>>n>>e;
    int** edges=new int*[n];
    for(int i=0; i<n; i++){
        edges[i]=new int[n];
        for(int j=0; j<n; j++){
            edges[i][j]=0;
        }
    }
    for(int i=0; i<e; i++){
        int f, s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    int start;
    int end;
    cin>>start>>end;
   /* bool* visited=new bool[n];
    for(int i=0; i<n; i++){
        visited[i]=false;
    }*/
  /* cout<< (haspath(edges, n, start, end)?"true" :"false");
}*/
#include <iostream>
using namespace std;

bool haspathhelper(int** edges, int n, int start, int end, bool* visited){
    if(start==end){
        return true;
    }
    visited[start]=true;
    for(int i=0; i<n; i++){
        if(edges[start][i] && !visited[i]){
            if(haspathhelper(edges, n , i, end, visited)){
                return true;
            }
        }
    }
    return false;
}

bool haspath(int** edges, int n, int start, int end){
    bool* visited=new bool[n];
    for(int i=0; i<n; i++){
        visited[i]=false;
    }
    return haspathhelper(edges, n, start, end, visited);
}

int main() {
    int n, e;
    cin >> n >> e;
    int** edges = new int*[n];
    for(int i=0; i<n; i++){
        edges[i] = new int[n];
        for(int j=0; j<n; j++){
            edges[i][j] = 0;
        }
    }
    for(int i=0; i<e; i++){
        int f, s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    int start, end;
    cin>>start>>end;
    cout<< (haspath(edges, n, start, end)?"true" :"false");
}
