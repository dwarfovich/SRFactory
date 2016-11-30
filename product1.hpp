#ifndef PRODUCT1_HPP
#define PRODUCT1_HPP

#include "product.hpp"

class Product1 : public Product
{
public:
    Product1 ();
    ~Product1 ();

    void printMessage () const;
};

#endif // PRODUCT1_HPP
