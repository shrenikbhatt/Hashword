#include <iostream>
#include "Hashword.hpp"

int main(){
    std::string masterPass, site, username;

    while (!masterPass.length()){
        std::cout << "Enter master phrase (DO NOT SHARE THIS WITH ANYONE)" << std::endl;
        getline(std::cin, masterPass);
    }

    
    while(true){
        std::cout << "Enter site name (or type exit to quit): ";
        std::cin >> site;

        if (site == "exit" || site == "")
            break;

        std::cout << "\nEnter username: ";
        std::cin >> username;

        Hashword h1 = Hashword(masterPass);
        h1.set_siteName(site);
        h1.set_username(username);

        std::cout << "\n" << h1.intToAlphaNums() << "\n" << std::endl;
    }
    return 0;
}