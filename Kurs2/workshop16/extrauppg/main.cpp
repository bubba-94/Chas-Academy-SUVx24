#include <nlohmann\json.hpp>
#include <string>
#include <map>
#include <iostream>
#include <fstream>

using json = nlohmann::json;

struct Product 
{
    std::string name;
    std::string description;
    double price;
    int quantity;
};

struct Customer 
{
    std::string first_name;
    std::string last_name;
    std::string email;
    std::string phone;
    std::string address;
    std::string zipcode;
    std::string city;
};

void customer_to_json(json &updated_info,std::map<int, Customer> &customers);
json read_json_file(const std::string& file_address);
void write_json_file(json &updated_json, const std::string &file_address);
void add_new_customer(json &file_reader, std::map<int, Customer> &customers);
void main_menu();
void list_all_products(json &file_reader, std::map<int, Product> &products);
void list_all_customers(json &file_reader, std::map<int, Customer> &customers);
void list_all_orders(json &file_reader, std::map<int, Customer> &orders);

int main()
{
    std::map<int, Customer> customers;
    std::vector <Product> orders;
    std::map<int, Product> products;
    bool menu{true};
    int menu_input{};
    int customer_menu{};

    //read_json_file("products.json");
    //read_json_file("customers.json");
    
    //json read_from_orders = read_json_file("orders.json");
    json read_from_products = read_json_file("products.json");
    json read_from_customers = read_json_file("customers.json");
    json updated_customer = read_from_customers;
    json updated_product = read_from_products;
    while(menu == true)
    {
        std::cout << "\n\n---MAIN MENU---"
                  << "\n1) Customer menu and options" 
                  << "\n2) Product menu and options"
                  << "\n3) Order menu and options"
                  << "\n4) EXIT\n"; 
        std::cin >> menu_input;
        std::cin.ignore();
        switch(menu_input)
        {
            case 1:
            std::cout << "\n\n---CUSTOMER MENU---"
                      << "\n1) List all current customers"
                      << "\n2) Add new customers"
                      << "\n3) Edit current customers"
                      << "\n4) Back to main menu\n"; 
                std::cin >> customer_menu;
                std::cin.ignore();
                switch(customer_menu)
                { 

                    case 1:
                        list_all_customers(updated_customer, customers);
                    break;
                    case 2:
                        add_new_customer(read_from_customers, customers);
                    break;
                    case 3:
                        
                    break;
                    case 4:
                        customer_to_json(updated_customer, customers);
                    break;
                }

            break;

            case 2:
                std::cout << "\n\n---PRODUCT MENU---"
                          << "\n1) List all current products"
                          << "\n2) Add new products"
                          << "\n3) Edit current products"
                          << "\n4) Back to main menu\n";
                    list_all_products(updated_product, products);
            break;

            case 3:
            break;

            case 4:
                write_json_file(updated_customer, "customers.json");
                std::cout << "\nBye!";
                menu = false;
            break;

            default:
                std::cout << "\nType 1-5 please.";
            break;
        }
    }

}

void add_new_customer(json &file_reader, std::map<int, Customer> &customers)
{
    Customer temp_customer;
    
    // Finds first available integer index, starts at 1
    int new_id{1};
    while (customers.find(new_id) != customers.end()) {
        ++new_id;
    }

    std::cout << "\n---Add a new CUSTOMER | ID: [" << new_id << "]---" ;
    std::cout << "\nFirst name: ";
    std::getline(std::cin, temp_customer.first_name);
    std::cout << "Last name: ";
    std::getline(std::cin, temp_customer.last_name);
    std::cout << "Email: ";
    std::getline(std::cin, temp_customer.email);
    std::cout << "Phone: ";
    std::getline(std::cin, temp_customer.phone);
    std::cout << "Address: ";
    std::getline(std::cin, temp_customer.address);
    std::cout << "ZIP: ";
    std::getline(std::cin, temp_customer.zipcode);
    std::cout << "City: ";
    std::getline(std::cin, temp_customer.city);

    // Adds temp_customer to the existing customer map.
    customers[new_id] = temp_customer;

    std::cout << "\nNew customer: {" << new_id << "} added to database.\n";
}
json read_json_file(const std::string& file_address)
{
    // Reads from current database via filename 
    std::ifstream read_file(file_address);
    if (!read_file.is_open())
    {
        
        std::cerr << "Could not open file" + file_address;
    }

    json temp_data; 
    read_file >> temp_data;
    std::cout << file_address << " is open\n";

    return temp_data;
}
void write_json_file(json &updated_json, const std::string &file_address)
{
    // Writes to a json file with the updated json object
    std::ofstream write_file (file_address);
    if (write_file)
    {
        write_file << updated_json.dump(4);
        std::cout << "\nData saved to: " + file_address << "\n";
    }
    else 
    {
        std::cerr << "Error writing to: " + file_address << "\n";
    }
}

void list_all_products(json &file_reader, std::map<int, Product> &products)
{
    {
    // Iterate every row paired with key. items() gives acces to the pair.
    for (const auto& [key, row] : file_reader.items())  
    {
        // Converts the string "key" to customer_id <int>
        int product_id = std::stoi(key); 

        products[product_id] = 
        { 
            row.contains("name") ? row["name"].get<std::string>() : " ",
            row.contains("description") ? row["description"].get<std::string>() : " ",
            row.contains("price") ? row["price"].get<double>() : 0.0,
            row.contains("quantity") ? row["quantity"].get<int>() : 0
        };
    }
    
    // List all products in products.json
    std::cout << "\n----------PRODUCT LIST----------";
    for (const auto& [id, product] : products)
    {
        std::cout << "\nID: " << id << std::setw(10)
                  << "\nName: " << product.name
                  << "\nDescription: " << product.description
                  << "\nPrice: " << product.price
                  << "\nQuantity: " << product.quantity;
        std::cout << "\n----------------------------------";
    }
}

}

void list_all_customers(json &file_reader, std::map<int, Customer> &customers)
{
    // Iterate every row paired with key. items() gives acces to the pair.
    for (const auto& [key, row] : file_reader.items())  
    {
        // Converts the string "key" to customer_id <int>
        int customer_id = std::stoi(key); 

        customers[customer_id] = 
        { 
            row.contains("first_name") ? row["first_name"].get<std::string>() : " ",
            row.contains("last_name") ? row["last_name"].get<std::string>() : " ",
            row.contains("email") ? row["email"].get<std::string>() : " ",
            row.contains("phone") ? row["phone"].get<std::string>() : " ",
            row.contains("address") ? row["address"].get<std::string>() : " ",
            row.contains("zipcode") ? row["zipcode"].get<std::string>() : " ",
            row.contains("city") ? row["city"].get<std::string>() : " "
        };
    }
    
    // List all customers in customer.json
    std::cout << "\n----------CUSTOMER LIST----------";
    for (const auto& [id, customer] : customers)
    {
        std::cout << "\nID: " << id << std::setw(10)
                  << "\nFirst name: " << customer.first_name
                  << "\nLast name: " << customer.last_name
                  << "\nEmail: " << customer.email
                  << "\nPhone: " << customer.phone
                  << "\nAddress: " << customer.address
                  << "\nZipcode: " << customer.zipcode
                  << "\nCity: " << customer.city;
        std::cout << "\n----------------------------------";
    }
}

void list_all_orders(json &file_reader, std::map<int, Customer> &orders)
{

}

void customer_to_json(json &updated_info,std::map<int, Customer> &customers)
{
    // Convert new CUSTOMER c++ data to json data
    for (const auto& [id, info] : customers)
    {
        updated_info[std::to_string(id)]= 
        {
            {"first_name", info.first_name},
            {"last_name", info.last_name},
            {"email", info.email},
            {"phone", info.phone},
            {"address", info.address},
            {"zipcode", info.zipcode},
            {"city", info.city}
        };
    }
}