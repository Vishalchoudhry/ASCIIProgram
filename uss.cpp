#include <iostream>

int main()
{
    unsigned short us1{3};
    unsigned short us2{5};
    unsigned short us3{us1 - us2};
    std::cout << "us1-us2= " << us3 << "\n"; //output is 65534
    std::cout << "us1-us2= " << us1 - us2;   // output is -2
    //but
    unsigned int ui1{3};
    unsigned int ui2{5};
    unsigned int ui3{ui1 - ui2};
    std::cout << "\nui1-ui2= " << ui1 - ui2 << "\n"; //output is 4294967294
    std::cout << "ui1-ui2= " << ui3;                 //output is 4294967294

    return 0;
};
