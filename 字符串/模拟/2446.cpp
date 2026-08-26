class Solution {
public:
    vector<string> split(const string& s, char delimiter) {
        vector<string> tokens;
        istringstream stream(s);
        string token;
        
        while (getline(stream, token, delimiter)) {
            tokens.push_back(token);
        }
        return tokens;
    }

    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int s1, s2;
        int e1, e2;
        vector<string> c=split(event1[0], ':');
        s1 = stoi(c[0])*60+stoi(c[1]);
        c=split(event2[0], ':');
        s2 = stoi(c[0])*60+stoi(c[1]);
        c=split(event1[1], ':');
        e1 = stoi(c[0])*60+stoi(c[1]);
        c=split(event2[1], ':');
        e2 = stoi(c[0])*60+stoi(c[1]);
    
        if (max(s1, s2) <= min(e1, e2)) return true;
        return false;
    }
};
