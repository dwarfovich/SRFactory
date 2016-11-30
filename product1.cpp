#include "product1.hpp"
#include "product_maker.hpp"
#include <iostream>

static ProductMaker<Product1> product1_maker {"Product1"};

Product1::Product1 ()
{}

Product1::~Product1 ()
{}

void Product1::printMessage () const
{
    std::cout << "Product 1 message" << std::endl;
}
