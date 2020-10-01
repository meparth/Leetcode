#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<unordered_set<int>> matrix(numCourses);

        for(int i=0 ; i<prerequisites.size() ; i++){
            matrix[prerequisites[i][1]].insert(prerequisites[i][0]);
        }    
        
        vector<int> d(numCourses, 0);
        for(int i=0 ; i<numCourses ; i++){
            for(auto it=matrix[i].begin() ; it!=matrix[i].end() ; ++it){
                ++d[*it];
            }
        }
      

        for(int i, k=0 ; k<numCourses ; k++){
            for(i=0 ; i<numCourses && d[i]!=0 ; i++);
            if(i==numCourses) return false;
            d[i] = -1;
            for(auto it=matrix[i].begin() ; it!=matrix[i].end() ; ++it){
                d[*it]--;
            }
        }

        return true;

        
        
    }
};

int main(){
    int n = 10;
    vector< unordered_set<int> > matrix(n);
    matrix[1].insert(2);
    matrix[2].insert(3);
    matrix[5].insert(4);
    matrix[5].insert(8);
    matrix[2].insert(8);

    vector<int> d(n);

    for(int i=0 ; i<n ; i++){
        for(auto it = matrix[i].begin() ; it!=matrix[i].end() ; it++){
            d[*it]++;
            cout << "--" << *it << "--" << endl;
        }
    }

    for(int i=0 ; i<n ; i++){
        cout << "--" << i << "--" << d[i] << "--" << endl;
    }
    return 0;
}