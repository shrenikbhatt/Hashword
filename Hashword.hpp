#ifndef HASHWORD_HPP
#define HASHWORD_HPP

#include <string>

class Hashword {
private:
    std::string _masterPass;
    std::string _siteName;
    std::string _username;
public:
    Hashword(std::string masterPass);
    ~Hashword();

    void set_siteName(std::string siteName);
    void set_username(std::string username);
    
    std::string get_siteName();
    std::string get_username();

    std::size_t encode();
    // std::string first_hash();
    // std::string second_hash();
};

#endif