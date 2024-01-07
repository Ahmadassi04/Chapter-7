#include <iostream>

int getValue(){

    std::cout << "Enter an integer: ";
    int smaller;
    std::cin >> smaller;

    return smaller;
}

namespace foo{

int getValue(){

    std::cout << "Enter a larger integer: ";
    int larger;
    std::cin >> larger;

    return larger;
}
}

int main()
{

     int smaller = getValue();
     int larger = foo::getValue();

     if(smaller > larger){
        std::cout << "Swapping the values" << '\n';

        int s = larger;
        larger = smaller;
        smaller = s;

        std::cout << "The smaller value is: " << smaller << '\n';
    std::cout << "The larger value is: " << larger;
     }

     else if (larger > smaller){
        std::cout << "no need to swap the values" << '\n';
        std::cout << "The smaller value is: " << smaller << '\n';
        std::cout << "The larger value is: " << larger;
     }
     else{
        std::cout << "Numbers are equal";
     }

    return 0;
}


