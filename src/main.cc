#include<iostream>

int main ()
{
    //Enteros
    int number1{2147483647};
    short int number2{1};
    unsigned int number3{4294967295};//No tiene signo
    const unsigned short int number4{4}; //Este valor no es modificable, no tiene signo y es de 16 bit
    long long int number5{6};
    
    //Caracter
    char char1{'a'};
    unsigned char char2{254};

    //Bool
    bool option{false}; //Es 1 ó 0 / true = 1 o false = 0
    
    //Flotantes
    //float numberf1{0.99999999999};

    std::cout << "Int size is: " << sizeof(number1) << "bytes" << std::endl;
   //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0]
    std::cout << "Short Int size is: " << sizeof(number2) << "bytes" << std::endl;
   //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0]
    std::cout << "Unsigned Int size is: " << sizeof(number3) << "bytes" << std::endl;
    std::cout << "Long long Int size is: " << sizeof(number5) << "bytes" << std::endl;

    //std::cout << "Float 1:" << numberf1 << std::endl;

    //Asi también se puede declarar la variable
    std::cout << "Float: " << sizeof(float) << "bytes" << std::endl; //32 bits
    std::cout << "Double: " << sizeof(double) << "bytes" << std::endl; //64 bits / Long double 
    std::cout << "Long Double: " << sizeof(long double) << "bytes" << std::endl; //96 bits
    
    std::cout << "Char" << char1 << " " << sizeof(char) << "bytes" << std::endl; //8 bits
    std::cout << "Char: " << sizeof(char) << "bytes" << std::endl; //4 bits
    std::cout << "Char: " << sizeof(unsigned const char) << "bytes" << std::endl;
    
    //std::cout << "Hello World";

    std::cin.get();

    return 0;
}