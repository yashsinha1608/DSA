#include <bits/stdc++.h>
using namespace std;

struct Item {
    double value;
    double weight;
};

bool comp(Item val1, Item val2) {
    if (val1.value / val1.weight >= val2.value / val2.weight)
        return true;
    return false;
}

double fractionalKnapsack(vector<Item>& arr, double W) {
    sort(arr.begin(), arr.end(), comp);  // sort by value/weight ratio

    double totVal = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i].weight <= W) {
            // take whole item
            totVal += arr[i].value;
            W = W - arr[i].weight;
        } else {
            // take fraction
            totVal += (arr[i].value / arr[i].weight) * W;
            break;
        }
    }
    return totVal;
}

int main(){
    
}