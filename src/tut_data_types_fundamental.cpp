#include "./tut_data_types_fundamental.hpp"

void tut::tutDataTypesFundamental_int() 
{

    /*
    Intgers
    
    Note: __ can be used as a prefix (Microsoft convention)
    Note: signed (is optional)

    Integer 8bit : int8_t, char, wchar_t
    Integer 16bit : int16_t, short int
    Integer 32bit : int32_t, int
    Integer 64bit : int64_t, long int
    Integer 128bit : __int128_t, long long int

    Unsigned Integer 8bit : unsigned int8_t, uint8_t, unsigned char
    Unsigned Integer 16bit : unsigned int16_t, uint16_t, unsigned short int
    Unsigned Integer 32bit : unsigned int32_t, uint32_t, unsigned int
    Unsigned Integer 64bit : unsigned int64_t, uint64_t, unsigned long int
    Unsigned Integer 128bit : __uint128_t
    */

    

    std::cout << "Size of int32_t = " << sizeof(int32_t) << "\n";
    std::cout << "Min of int32_t  = " << std::numeric_limits<int32_t>::min() << "\n";
    std::cout << "Max of int32_t  = " << std::numeric_limits<int32_t>::max() << "\n";
    std::cout << "isSigned of int32_t  = " << std::numeric_limits<int32_t>::is_signed << "\n";

    std::cout << "Size of uint32_t = " << sizeof(uint32_t) << "\n";
    std::cout << "Min of uint32_t  = " << std::numeric_limits<uint32_t>::min() << "\n";
    std::cout << "Max of uint32_t  = " << std::numeric_limits<uint32_t>::max() << "\n";
    std::cout << "isSigned of uint32_t  = " << std::numeric_limits<uint32_t>::is_signed << "\n";

    std::cout << "Size of int64_t = " << sizeof(int64_t) << "\n";
    std::cout << "Min of int64_t  = " << std::numeric_limits<int64_t>::min() << "\n";
    std::cout << "Max of int64_t  = " << std::numeric_limits<int64_t>::max() << "\n";
    std::cout << "isSigned of int64_t  = " << std::numeric_limits<int64_t>::is_signed << "\n";

    std::cout << "Size of uint64_t = " << sizeof(uint64_t) << "\n";
    std::cout << "Min of uint64_t  = " << std::numeric_limits<uint64_t>::min() << "\n";
    std::cout << "Max of uint64_t  = " << std::numeric_limits<uint64_t>::max() << "\n";
    std::cout << "isSigned of uint64_t  = " << std::numeric_limits<uint64_t>::is_signed << "\n";

    std::cout << "Size of char = " << sizeof(char) << "\n";
    std::cout << "Min of char  = " << std::numeric_limits<char>::min() << "\n";
    std::cout << "Max of char  = " << std::numeric_limits<char>::max() << "\n";


    
}

 void tutDataTypesFundamental_real() 
 {
    /*
    Reals

    Real 32bit: float_t, float, __Float32, __Float32x, __float32, __float32x
    Real 64bit: double, double_t, __Float64, __Float64x, __float64, __float64x
    Real 80bit: __float80
    Real 128bit: __float128

    */
    std::cout << "Size of float = " << sizeof(float) << "\n";
    std::cout << "Min of float  = " << std::numeric_limits<float>::min() << "\n";
    std::cout << "Max of float  = " << std::numeric_limits<float>::max() << "\n";
    std::cout << "Max of float  = " << std::numeric_limits<float>::epsilon() << "\n";

    std::cout << "Size of double = " << sizeof(double) << "\n";
    std::cout << "Min of double  = " << std::numeric_limits<double>::min() << "\n";
    std::cout << "Max of double  = " << std::numeric_limits<double>::max() << "\n";
    std::cout << "Max of double  = " << std::numeric_limits<double>::epsilon() << "\n";

    std::cout << "Size of long double = " << sizeof(long double) << "\n";
    std::cout << "Min of long double  = " << std::numeric_limits<long double>::min() << "\n";
    std::cout << "Max of long double  = " << std::numeric_limits<long double>::max() << "\n";
    std::cout << "Max of long double  = " << std::numeric_limits<long double>::epsilon() << "\n";
}

void tutDataTypesFundamental_others()
{

    /* 
    Boolean : bool (true, false)
    Null Value : void
    Null Address/Pointer : NULL, nullptr, std::nullptr_t
    */

    std::cout << "Size of bool = " << sizeof(bool) << "\n";
}