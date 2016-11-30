#ifndef FACTORY_HPP
#define FACTORY_HPP

#include <unordered_map>
#include <string>
#include <memory>

class ProductMakerBase;
class Product;

class Factory
{
public:
    static Factory& instance ();
    Factory (const Factory&) = delete;
    Factory& operator= (const Factory&) = delete;

    void registerMaker (const std::string& name, ProductMakerBase* maker);
    std::unique_ptr<Product> create (const std::string& name);

private:
    Factory();

private:
    std::unordered_map<std::string, ProductMakerBase*> makers_;
};

#endif // FACTORY_HPP
