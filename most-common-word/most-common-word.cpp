class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        map<string, int> dict;
        int found = 0;
        std::regex r(R"([^\W_]+(?:['_-][^\W_]+)*)");
    
        for(std::sregex_iterator i = std::sregex_iterator(paragraph.begin(), paragraph.end(), r);
                             i != std::sregex_iterator();
                             ++i)
        {
            std::smatch m = *i;
            string ans = m.str();
            std:: transform(ans.begin(), ans.end(), ans.begin(), ::tolower);    
            // std::cout << m.str() << '\n';
            if(dict.find(ans) != dict.end()){
                dict[ans] += 1;
            }
            else{
                dict[ans] = 1;
            }
            
        }
        int max = 0;
        string word = "";
        for (auto iter = dict.begin(); iter != dict.end(); iter++){
            if(max < iter->second && find(banned.begin(), banned.end(), iter->first) == banned.end()){
                word = iter->first;
                max = iter->second;
            }
        }
        std:: transform(word.begin(), word.end(), word.begin(), ::tolower);
        return word;
    }
};