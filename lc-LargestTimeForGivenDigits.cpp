#include<bits/stdc++.h>
using namespace std;



string largestTimeFromDigits(vector<int>& A) {
    string time = "";
    int longHour = -1, longMin = -1;

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            int k = (i+j)%4;
            if(k == i) continue;
            // [i] + 10 * [k]
            int hour = A[i] + 10 * A[k];
        
            int m1 = (i+1)%4, m2 = (k+1)%4;
            if(m1 == k) m1 = (i+3)%4;
            if(m2 == i || m2 == m1) m2 = (k+3)%4;
            
            int min[] = {A[m1] + 10 * A[m2], A[m2] + 10 * A[m1]};
            

            if(hour>23) continue;
            // cout << "--" << hour << "--" << min[0] << "--" << min[1] << "--" << endl;

            for(int m=0 ; m<2 ; m++){
                if(min[m]>=60) continue;
                if((hour > longHour) || (hour == longHour && min[m] > longMin)){
                    longHour = hour;
                    longMin = min[m];
                }
            }

        }
    }
    // cout << "--" << longHour << "--" << longMin << "--" << endl;
    
    if(longHour==-1) return "";
    if(longHour<10) time += "0";
    time += to_string(longHour) + ":";
    if(longMin<10) time += "0";
    time += to_string(longMin);
    return time;
}

int main(){
    // vector<int> A{2,0,6,6};
    vector<int> A{2,0,6,6};
    cout << largestTimeFromDigits(A);

    return 0;
}





/*  attempt 1

int largestOf(int n, vector<int>& A){
    int maxA = INT_MIN;
    int maxI = -1;
    for(int i=0 ; i<A.size() ; i++){
        if(A[i]<=n && A[i]>maxA){
            maxI = i;
            maxA = A[i];
        }
    }
    if(maxI == -1 || maxA == -1) return -1;
    A[maxI] = -1;
    return maxA;
}

string largestTimeFromDigits(vector<int>& A) {
    string time = "";
    int n;
    
    int hand = largestOf(2, A);
    if(hand==-1) return "";
    time += to_string(hand);

    if(hand<2) n = 9;
    else n=3;
    hand = largestOf(n, A);
    if(hand == -1) return "";
    time += to_string(hand);

    hand = largestOf(5, A);
    if(hand == -1) return "";
    time += ":" + to_string(hand);

    hand = largestOf(9, A);
    if(hand == -1) return "";
    time += to_string(hand);

    return time;
} */