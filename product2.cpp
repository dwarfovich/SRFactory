#include "product2.hpp"
#include "product_maker.hpp"
#include <iostream>

static ProductMaker<Product2> product2_maker {"Product2"};

Product2::Product2 ()
{}

Product2::~Product2 ()
{}

void Product2::printMessage () const
{
    std::cout << "Product 2 message" << std::endl;
}
