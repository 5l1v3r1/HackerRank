#include <bits/stdc++.h>
/*
 * Difficulty Medium
 * Max Score 25
 * https://www.hackerrank.com/challenges/sparse-arrays/
 */

using namespace std;

// Complete the matchingStrings function below.
vector<int> matchingStrings(vector <string> strings, vector <string> queries) {
    unordered_map <string, size_t> mp;
    for (auto &&s : strings) {
        mp[s]++;
    }

    vector<int> res;
    for (auto &&q : queries) {
        if (mp.count(q)) {
            res.push_back(mp[q]);
        } else {
            res.push_back(0);
        }
    }

    return res;

}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector <string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector <string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
