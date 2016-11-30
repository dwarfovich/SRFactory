#ifndef PRODUCT_HPP
#define PRODUCT_HPP

class Product
{
public:
    Product ();
    virtual ~Product () = 0;

    virtual void printMessage () const = 0;
};

#endif // PRODUCT_HPP
