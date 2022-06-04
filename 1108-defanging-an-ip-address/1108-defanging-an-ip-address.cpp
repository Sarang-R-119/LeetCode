class Solution {
public:
    string defangIPaddr(string address) {

        string newIP;
        string:: iterator it;
        for (it = address.begin(); it != address.end(); it++){
            if(*it == '.')
                newIP += "[.]";
            else
                newIP += *it;
        }
        
/*        O(n^2)
        std::size_t found = 0;
        
        while(address.find('.', found) != string::npos){
            found = address.find('.', found);
            address.insert(found,"[");
            address.insert(found + 2,"]");
            found += 2;
        }
*/
        
        return newIP;
    }
};