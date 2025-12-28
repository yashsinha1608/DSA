 #include <bits/stdc++.h>
using namespace std;

vector<int> asteroid(vector<int> &val){

int n=val.size();
vector<int> st;
for(int i=0;i<n;i++){
    if(val[i]>0){
        st.push_back(val[i]);
    }
    else{
        while(!st.empty() && st.back()>0 && st.back()<abs(val[i])){
            st.pop_back();
        }
        if(!st.empty() && st.back()==abs(val[i])){
            st.pop_back();
        }

        else if(st.empty() || st.back()<0){
            st.push_back(val[i]);
        } 
    }
}
return st;
}

int main(){
    
}