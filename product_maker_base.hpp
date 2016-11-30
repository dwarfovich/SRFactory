#ifndef PRODUCTMAKERBASE_HPP
#define PRODUCTMAKERBASE_HPP

#include <memory>

class Product;

class ProductMakerBase
{
public:
    ProductMakerBase ();
    virtual ~ProductMakerBase () = 0;

    virtual std::unique_ptr<Product> create () const = 0;
};

#endif // PRODUCTMAKERBASE_HPP
