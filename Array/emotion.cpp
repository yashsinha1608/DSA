#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> freq;


    for (char c : s) {
        freq[c]++;
    }


    int expected_freq = freq.begin()->second;

    bool balanced = true;
    for (auto pair : freq) {
        if (pair.second != expected_freq) {
            balanced = false;
            break;
        }
    }

    if (balanced) {
        cout << "Aashriya smiles: Emotional balance found." << endl;
    } else {
        cout << "Aashriya wonders: These thoughts were scattered." << endl;
    }

    return 0;
}