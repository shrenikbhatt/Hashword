#include <iostream>
#include "Hashword.hpp"

int main(){
    std::string masterPass, site, username;

    while (!masterPass.length()){
        std::cout << "Enter master phrase (DO NOT SHARE THIS WITH ANYONE)" << std::endl;
        getline(std::cin, masterPass);
    }

    std::cout << "Enter site name" << std::endl;
    std::cin >> site;

    std::cout << "Enter username" << std::endl;
    std::cin >> username;

    Hashword h1 = Hashword(masterPass);
    h1.set_siteName(site);
    h1.set_username(username);

    std::cout << h1.intToAlphaNums() << std::endl;
    return 0;
}