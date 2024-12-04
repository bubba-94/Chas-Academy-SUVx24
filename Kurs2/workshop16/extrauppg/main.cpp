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
void list_all_products(json &file_reader, std::map<int, Customer> &products);
void list_all_customers(json &file_reader, std::map<int, Customer> &customers);
void list_all_orders(json &file_reader, std::map<int, Customer> &orders);

int main()
{
    std::map<int, Customer> customers;
    std::vector <Product> orders;
    std::map<int, Product> products;
    //read_json_file("products.json");
    //read_json_file("customers.json");
    
    //json read_from_orders = read_json_file("orders.json");
    //json read_from_products = read_json_file("products.json");
    json read_from_customers = read_json_file("customers.json");
    
    // Lists the initial customer DB
    list_all_customers(read_from_customers, customers);
    add_new_customer(read_from_customers, customers);

    // Json object for updating customer objects. 
    json updated_customer = read_from_customers;

    customer_to_json(updated_customer, customers);
    list_all_customers(updated_customer, customers);

    write_json_file(updated_customer, "customers.json");
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