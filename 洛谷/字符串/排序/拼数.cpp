#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> lst(n);

    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }

    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        return a + b > b + a;
    });

    if (lst[0] == "0") {
        cout << "0" << endl;
        return 0;
    }

    string result;
    for (string s : lst) {
        result += s;
    }
    cout << result << endl;

    return 0;
}
