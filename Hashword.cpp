#include "Hashword.hpp"

Hashword::Hashword(string masterPass){
    _masterPass = masterPass;
}

Hashword::~Hashword(){
}

void Hashword::set_siteName(string siteName){
    _siteName = siteName;
}

void Hashword::set_username(string username){
    _username = username;
}

string Hashword::get_siteName(){
    return _siteName;
}

string Hashword::get_username(){
    return _username;
}

string Hashword::encode(){
    
}