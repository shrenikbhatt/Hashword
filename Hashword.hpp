#ifndef HASHWORD_HPP
#define HASHWORD_HPP

#include <string>

class Hashword {
private:
    string _masterPass;
    string _siteName;
    string _username;
public:
    Hashword(string masterPass);
    ~Hashword();

    void set_siteName(string siteName);
    void set_username(string username);
    
    string get_siteName();
    string get_username();

    string encode();
    string first_hash();
    string second_hash();
};

#endif