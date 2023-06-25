#pragma once
#include "common.hpp"

namespace tut {
    void eg_pass_by_value(int a);
    void eg_pass_by_reference(int &a);
    void eg_pass_by_address_or_pointer(int* a);
    void eg_pass_by_constant_reference(const int &a);
    void eg_pass_by_constant_address_or_pointer(const int* a);

    void try_different_passes();
}