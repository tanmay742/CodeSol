class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> ans;
        vector<string> digit;
        vector<string> letter;
        for (auto i : logs) {
            if (i[i.length()-1] >='0'&&i[i.length()-1] <='9') {
                digit.push_back(i);
            } else
                letter.push_back(i);
        }
        map<string, vector<string>> mp;
        for (auto j : letter) {
            int spaceidx = 0;
            string key = "";
            int i = 0;
            for (; j[i] != ' '; i++) {
                key += j[i];
            }
            key += j[i];
            string value = j.substr(i + 1, j.length() - i);

            mp[value].push_back(key);
        }

        for (auto x : mp) {
            string content = x.first;
            if (x.second.size() > 1)
                sort(x.second.begin(), x.second.end());
            for (auto p : x.second) //[let1, let3, let4]aisa sa hoga
            {
                string temp = p + content;
                ans.push_back(temp);
            }
        }
        for (auto o : digit)
            ans.push_back(o);
        return ans;
    }
};