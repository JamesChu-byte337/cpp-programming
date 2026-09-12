//C++ Program to Add/Subtract/Multiply/Divide Two Integers.

#include <iostream> 

int main ();
int main ()

{
    int num1,num2; 
    std::cout <<"enter two integers: "; 
    std::cin >> num1 >> num2;


    std::cout <<"Sum: " << num1+num2 << std::endl; 
    std::cout <<"Difference: " << num1-num2 << std::endl; 
    std::cout <<"Product: " << num1*num2 << std::endl; 
    if (num2 != 0)
    {
        std::cout <<"Quotient: " << num1/num2 << std::endl; 
        std::cout <<"Remainder: " << num1%num2 << std::endl; 
    }
    else
    {
        std::cout <<"Quotient and remainder are undefined when dividing by zero." << std::endl;
    }
    
    return 0;
}
