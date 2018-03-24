#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <utility>
using namespace std;

/* my code DFS O(n) : Time Limit Exceeded.... 
    bool DFS( unordered_map<int, vector<int> > hamp, int c1, int c2 ){
        for( int i=0; i<hamp[c2].size(); i++){
            if( hamp[c2][i] == c1 ) return false;
            if( !DFS(hamp, c1, hamp[c2][i]) ) return false;
        }
        return 1;
    }
    
    bool canFinish(int numCourses, vector<pair<int, int> >& prerequisites) {
        unordered_map<int, vector<int> > hamp;
        for(int i=0; i<prerequisites.size(); i++){
            int course1 = prerequisites[i].first;
            int course2 = prerequisites[i].second;       
            if( !DFS(hamp, course1, course2) ) return false;
            hamp[course1].push_back(course2);
        }
        return true;
        
    }
    */

/*
class Solution {
    vector<vector<int> > list;
    unordered_set<int> visited;
    unordered_set<int> cycle;
    bool isCycle;
public:
    bool canFinish(int numCourses, vector<pair<int, int> >& prerequisites) {
        list.assign(numCourses, vector<int>());
        for(int i=0; i<prerequisites.size(); i++)
        {
            list[prerequisites[i].second].push_back(prerequisites[i].first);
        }
        for(int j=0; j<numCourses; j++)
        {
            if(visited.count(j)<1) dfs(j);
            if(isCycle) return false;    
        }
        return true;
    }
    void dfs(int j)
    {
        cycle.insert(j);
        visited.insert(j);
        for(int k=0; k<list[j].size(); k++)
        {
            if(cycle.count(list[j][k])>0) isCycle=true;  //use hashset to detect the cycle
            if(visited.count(list[j][k])<1) dfs(list[j][k]);
        }
        cycle.erase(j);
    }
};
*/
class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int> >& prerequisites) {
        vector<unordered_set<int> > graph = make_graph(numCourses, prerequisites);
        vector<bool> onpath(numCourses, false), visited(numCourses, false);
        for (int i = 0; i < numCourses; i++)
            if (!visited[i] && dfs_cycle(graph, i, onpath, visited))
                return false;
        return true;
    }
private:
    vector<unordered_set<int> > make_graph(int numCourses, vector<pair<int, int> >& prerequisites) {
        vector<unordered_set<int> > graph(numCourses);
        for (auto pre : prerequisites)
            graph[pre.second].insert(pre.first);
        return graph;
    } 
    bool dfs_cycle(vector<unordered_set<int> >& graph, int node, vector<bool>& onpath, vector<bool>& visited) {
        if (visited[node]) return false;
        onpath[node] = visited[node] = true; 
        for (int neigh : graph[node])
            if (onpath[neigh] || dfs_cycle(graph, neigh, onpath, visited))
                return true;
        return onpath[node] = false;
    }
};


int main(){
        int n=4;
        vector<pair<int, int> > prerequisites;
        
        prerequisites.push_back(make_pair(0,1));
        prerequisites.push_back(make_pair(1,2));
        prerequisites.push_back(make_pair(0,3));
        prerequisites.push_back(make_pair(3,0));
        /*
        prerequisites.push_back(make_pair(1,0));
        prerequisites.push_back(make_pair(0,2));
        prerequisites.push_back(make_pair(2,1));
        */
        Solution sol;
        cout<<sol.canFinish(n, prerequisites)<<endl;

}