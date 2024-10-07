#include <iostream>
#include <vector>
using namespace std;

// Function to count occurrences of each query string in the string list
vector<int> matchingStrings(const vector<string>& stringList, const vector<string>& queries) {
    vector<int> result;

    // For each query, count its occurrences in stringList
    for (const string& query : queries) {
        int count = 0;
        for (const string& str : stringList) {
            if (str == query) {
                count++;
            }
        }
        result.push_back(count);
    }

    return result;
}

int main() {
    int n, q;
    
    // Input number of strings
    cin >> n;
    
    vector<string> stringList(n);
    
    // Input strings for stringList
    for (int i = 0; i < n; i++) {
        cin >> stringList[i];
    }
    
    // Input number of queries
    cin >> q;
    
    vector<string> queries(q);
    
    // Input query strings
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }
    
    // Get the result of matching strings
    vector<int> res = matchingStrings(stringList, queries);
    
    // Output the results
    for (int count : res) {
        cout << count << endl;
    }
    
    return 0;
}
