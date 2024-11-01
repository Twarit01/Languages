#include <iostream>
#include <string>

int main() {
    // Create a variable to store user input
    std::string userInput;

    // Prompt the user to Pls Enter something
    std::cout << "Pls Enter something: ";

    // Take input from the user
    std::getline(std::cin, userInput);

    // Display the Pls Entered input
    std::cout << "You Pls Entered: " << userInput << std::endl;

    return 0;
}
