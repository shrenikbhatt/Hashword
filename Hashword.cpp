#include "Hashword.hpp"
#include <functional>

Hashword::Hashword(std::string masterPass){
    _masterPass = masterPass;
}

Hashword::~Hashword(){
}

void Hashword::set_siteName(std::string siteName){
    _siteName = siteName;
}

void Hashword::set_username(std::string username){
    _username = username;
}

std::string Hashword::get_siteName(){
    return _siteName;
}

std::string Hashword::get_username(){
    return _username;
}

std::size_t Hashword::encode(){
    std::string combined = _masterPass + _username + _siteName;
    std::size_t hash = std::hash<std::string>{}(combined);
    return hash;
}