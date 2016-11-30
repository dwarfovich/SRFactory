#ifndef PRODUCTMAKER_HPP
#define PRODUCTMAKER_HPP

#include "factory.hpp"
#include "product_maker_base.hpp"
#include <memory>
#include <string>

template<typename T>
class ProductMaker : public ProductMakerBase
{
public:
    ProductMaker(const std::string& name) {
        Factory::instance().registerMaker(name, this);
    }

    std::unique_ptr<Product> create () const {
        return std::unique_ptr<Product> (new T);
    }
};

#endif // PRODUCTMAKER_HPP
