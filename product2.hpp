#ifndef PRODUCT2_HPP
#define PRODUCT2_HPP

#include "product.hpp"

class Product2 : public Product
{
public:
    Product2 ();
    ~Product2 ();

    void printMessage () const;
};

#endif // PRODUCT2_HPP
