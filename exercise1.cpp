// exercise1.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(std::time(0));
    
    // Generate random integer between 0 and 11
    int daysUntilExpiration = std::rand() % 12;
    
    // Output based on conditions using if and if-else
    if (daysUntilExpiration <= 10) {
        if (daysUntilExpiration <= 5) {
            if (daysUntilExpiration <= 1) {
                if (daysUntilExpiration == 0) {
                    std::cout << "Your subscription has expired." << std::endl;
                } else {
                    std::cout << "Your subscription expires within a day!" << std::endl;
                    std::cout << "Renew now and save 20%!" << std::endl;
                }
            } else {
                std::cout << "Your subscription expires in " << daysUntilExpiration << " days" << std::endl;
                std::cout << "Renew now and save 10%!" << std::endl;
            }
        } else {
            std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
        }
    } else {
        std::cout << "You have an active subscription." << std::endl;
    }
    
    return 0;
}