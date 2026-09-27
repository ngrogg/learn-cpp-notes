#include <iostream> // import for cout

int main(){
    // Defining variable
    int width; 

    // Set a value for a variable
    width = 5;

    // Output value
    std::cout << width;

    // Set new value
    width = 7; 

    // Output new value
    std::cout << width;

    // Different forms of initialization
    // Default initialization, no initialization
    int variable_a;

    // Traditional initialization forms
    // copy-initialization, use variable above to set value
    variable_a = 5;

    // direct-initialization
    int variable_b (6);

    // Modern initialization forms
    // direct-list-initialization
    int variable_c { 7 };

    // value-initialization
    int variable_d {};

    // Output variables
    std::cout << variable_a << variable_b << variable_c << variable_d;

    return 0;
}
