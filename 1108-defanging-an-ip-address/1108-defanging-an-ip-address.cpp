class Solution {
public:
    string defangIPaddr(string address) {
        std::size_t found = 0;
        
        while(address.find('.', found) != string::npos){
            found = address.find('.', found);
            address.insert(found,"[");
            address.insert(found + 2,"]");
            found += 2;
        }
        
        return address;
    }
};