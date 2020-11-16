#include "Hashword.hpp"
#include <functional>
#include <iostream>

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

void Hashword::hash(){
    std::string combined = _masterPass + _username + _siteName;
    std::size_t hash = std::hash<std::string>{}(combined);
    _hash = hash;
}

std::string Hashword::intToAlphaNums(){
    hash();
    std::size_t hash = _hash;
    std::string s1;

    while (hash > 0){
        int temp = hash % 1000;
        temp = (temp % 93) + 33;
        s1.push_back(temp);
        hash /= 10;
    }

    return s1;
}