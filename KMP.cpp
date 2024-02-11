  // String : a a b a a  c  a a b a a  d
    // LPS    : 0 1 0 1 2  0  1 2 3 4 5  0

    // String : a a b #  a a b  a a b  a a b
    // LPS    : 0 1 0 0  1 2 3  1 2 3  1 2 3

    // Prefix that matches any subtsring of the string
    // Largest prefix that matches a suffix
    vector<int> kmp(string s){
        vector<int> lps(s.size(), 0);

        for(int i=1;i<lps.size();i++){
            int prev_idx = lps[i-1];

            while(prev_idx>0 && s[i] != s[prev_idx]){
                prev_idx = lps[prev_idx-1];
            }

            lps[i] = prev_idx + (s[i]==s[prev_idx] ? 1 : 0);
        }

        return lps;
    }
// to find the index of pattern in given string

for(int i=a.size();i<v.size();i++){
            int el = v[i];
            if(el == a.size()){
                int id = i - 2*a.size();
                if(id>=0)
                    va.push_back(id);
            }
        }


// source : https://youtu.be/Gr-eKRuWIQc?si=g6yk1icU4kfC9QWu
