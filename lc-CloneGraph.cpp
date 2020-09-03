#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


// here, here
unordered_map<Node*, Node*> umap;

Node* cloneGraph(Node* node) {
    if(!node) return node;
    if(umap.find(node) == umap.end()){
        umap[node] = new Node(node->val);
        for(auto x : node->neighbors){
            (umap[node]->neighbors).push_back(cloneGraph(x));
        }
    }
    return umap[node];
}


int main(){
    

    return 0;
}