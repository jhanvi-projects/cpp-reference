#include "tut_functions.hpp"

void tut::eg_pass_by_value(int a) 
{
    a += 1;
}

void tut::eg_pass_by_reference(int& a) 
{
    a += 1;
}

void tut::eg_pass_by_address_or_pointer(int* p_a) 
{
    *p_a += 1;
}

void tut::eg_pass_by_constant_reference(const int& a) {
    // a += 1; (Not Possible)
}  

void tut::eg_pass_by_constant_address_or_pointer(const int* p_a)
{
    // *p_a += 1; (Not Possible)
}

void tut::try_different_passes()
{
    int var_valPass = 5;
    int var_refPass = 5;
    int var_pPass = 5;
    int var_cpPass = 5;
    int var_crefPass = 5;

    std::cout << "Original Value = " << 5 << '\n';

    tut::eg_pass_by_value(var_valPass);    
    std::cout << "After value pass : " << var_valPass << '\n';
    
    tut::eg_pass_by_reference(var_refPass);
    std::cout << "After reference pass : " << var_refPass << '\n';
    
    tut::eg_pass_by_address_or_pointer(&var_pPass);
    std::cout << "After address/pointer pass : " << var_pPass << '\n';
    
    tut::eg_pass_by_constant_reference(var_crefPass);
    std::cout << "After constant reference pass : " << var_crefPass << '\n';
    
    tut::eg_pass_by_constant_address_or_pointer(&var_cpPass);
    std::cout << "After constant address/re pass : " << var_cpPass << '\n';
}
