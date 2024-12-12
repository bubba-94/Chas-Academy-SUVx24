#include <iostream>
#include <memory>
#include <cstdlib>
#include <array>
#include <iomanip>

struct Warehouse;

struct Product{
    std::string name;
    std::weak_ptr<Warehouse> ptr;
};
struct Warehouse{
    std::array<Product,10> locations{};
};

void print_locations(std::array<Product, 10> &locations, const std::string name);
void assign_product_to_location(Product product, std::array<Product, 10> &locations);

int main(){
    std::system("cls");
    Warehouse amazon;
    Warehouse postnord;
    // Shared pointers to warehouse objects.
    std::shared_ptr<Warehouse> amazonptr = std::make_shared<Warehouse>(amazon); 
    std::shared_ptr<Warehouse> postnordptr = std::make_shared<Warehouse>(postnord);

    // Products, 
    Product phone{"iPhone 1337", amazonptr};
    Product christmaspresent{"Jokes", postnordptr};
    Product something{"asdasd", postnordptr};

    int menu_selection{};

    while(menu_selection != 4){

        std::cout << "\nMENU"
                  << "\n1) Print all warehouses"
                  << "\n2) Assign a products to connected warehouse";
        std::cin >> menu_selection;
        std::cin.ignore();

        switch(menu_selection){

            case 1:
                print_locations(amazonptr->locations, "Amazon");
                print_locations(postnordptr->locations, "Postnord");
            break;

            case 2:
                assign_product_to_location(something, postnordptr->locations);
                assign_product_to_location(phone, amazonptr->locations);
                assign_product_to_location(christmaspresent, postnordptr->locations);
            break;
            
        }

    }
}
void print_locations(std::array<Product, 10> &locations, const std::string name)
{   
    // Show all locations and what occupies them
    int index{0};
    std::cout << "\n----------------------------"
              << "\n" << name;          
    
    for (const auto& product : locations)
    {
        std::cout << "\nLocation [" << index + 1 << "]: " << product.name;
        index++;
    }
}

void assign_product_to_location(Product product, std::array<Product, 10> &locations)
{
    int index{};
    std::cout << "\nEnter a specified location for " << product.name << ": ";
    std::cin >> index;
    std::cin.ignore();
    while(index < 1 || index > 10){

        std::cout << "Try again, 1-10: ";
        std::cin >> index;
        std::cin.ignore();
    }
    if(locations[index].name.empty()){

        locations[index] = product;
    }
    else{   
        // Takes the index and chooses the next one if [index] is occupied 
        index++;
        locations[index] = product;
    }
}