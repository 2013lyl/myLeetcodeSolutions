#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

vector<string> split(string s, char c) {
    vector<string> tokens;
    size_t start=0;
    size_t pos = s.find(c);
    while (pos != string::npos) {
        tokens.push_back(s.substr(start, pos-start));
        start = pos+1;
        pos = s.find(c, start);
    }

    tokens.push_back(s.substr(start));
    
    return tokens;
}

vector<string> splitKeepSign(string s, string delimiters = "+-") {
    vector<string> tokens;
    size_t start = 0;
    
    for (size_t i = 0; i < s.size(); ++i) {
        if (delimiters.find(s[i]) != string::npos) {
            if (i > start) {
                tokens.push_back(s.substr(start, i - start));
            }
            start = i;
        }
    }
    
    if (start < s.size()) {
        tokens.push_back(s.substr(start));
    }
    
    return tokens;
}

int myStoi(string s) {
    if (s.empty() || s == "+") return 1;
    if (s == "-") return -1;
    return stoi(s);
}

bool checkIsUnknow(string s, char unknow) {
    for (char c : s) {
        if (c == unknow) {
            return true;
        }
    }

    return false;
}

string reverse(string s) {
    if (s[0] == '+') s[0] = '-';
    else if (s[0] == '-') s[0] = '+';
    else {
        s = "-" + s;
    }
    return s;
}

int main() {
    string cal;
    cin >> cal;

    vector<string> temp = split(cal, '=');
    string left = temp[0];
    string right = temp[1];

    vector<string> leftNums = splitKeepSign(left, "+-");
    vector<string> rightNums = splitKeepSign(right, "+-");

    char unknow='x';
    vector<char> unknows = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (char c : cal) {
        if (find(unknows.begin(), unknows.end(), c) != unknows.end()) {
            unknow = c;
            break;
        }
    }

    float ans=0;
    float unknowSum=0;
    float numberSum=0;
    for (size_t i=0;i<leftNums.size();i++) {
        string now = leftNums[i];
        if (checkIsUnknow(now, unknow)) {
            unknowSum += myStoi(now.substr(0, now.size()-1));
        } else {
            numberSum += myStoi(now);
        }
    }
    for (size_t i=0;i<rightNums.size();i++) {
        string now = rightNums[i];
        if (checkIsUnknow(now, unknow)) {
            string rev = reverse(now);
            unknowSum += myStoi(rev.substr(0, rev.size()-1));
        } else {
            numberSum += myStoi(reverse(now));
        }
    }

    cout << fixed << setprecision(3) <<unknow << "=" << -numberSum / unknowSum;
    
    return 0;
}
