#include <bits/stdc++.h>
using namespace std;

struct Data {
    int start, end, pos;
};

bool comp(Data val1, Data val2) {
    return val1.end < val2.end;  // sort by end time
}

int maxMeetings(vector<int>& start, vector<int>& end, int N) {
    Data arr[N];

    for (int i = 0; i < N; i++) {
        arr[i].start = start[i];
        arr[i].end   = end[i];
        arr[i].pos   = i + 1;
    }

    sort(arr, arr + N, comp);

    int cnt      = 1;
    int freeTime = arr[0].end;
    vector<int> ds = {arr[0].pos};

    for (int i = 1; i < N; i++) {
        if (arr[i].start > freeTime) {
            cnt++;
            freeTime = arr[i].end;
            ds.push_back(arr[i].pos);
        }
    }

    cout << "Meetings selected (positions): ";
    for (int x : ds) cout << x << " ";
    cout << endl;

    return cnt;
}

int main(){
    
}