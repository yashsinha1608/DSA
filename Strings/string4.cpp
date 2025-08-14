#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) 
{
     if (strs.empty()) return "";
      sort(strs.begin(), strs.end());
      string first = strs[0];
    string last = strs.back();
      int i = 0;
       while (i < first.size() && i < last.size() && first[i] == last[i]) {
        i++;
    }
        return first.substr(0, i);

}


int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string result = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}
