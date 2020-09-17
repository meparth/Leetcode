#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for Directed graph.
 * struct DirectedGraphNode {
 *     int label;
 *     vector<DirectedGraphNode *> neighbors;
 *     DirectedGraphNode(int x) : label(x) {};
 * };
 */


class Solution {
public:
    /*
     * @param graph: A list of Directed graph node
     * @param s: the starting Directed graph node
     * @param t: the terminal Directed graph node
     * @return: a boolean value
     */
     
    unordered_map<DirectedGraphNode*, bool> flag;
    bool hasRoute(vector<DirectedGraphNode*> graph, DirectedGraphNode* s, DirectedGraphNode* t) {
        if(s==t) return true;
        // s->label = INT_MIN; // visited
        flag[s] = true; 
        cout << s->label << endl;
        for(int i=0 ; i<s->neighbors.size() ; i++){
            if(flag[s->neighbors[i]]) continue;
            if(hasRoute(graph, s->neighbors[i], t)) return true;
        }
        return false;
    }
};

int main(){
    

    return 0;
}