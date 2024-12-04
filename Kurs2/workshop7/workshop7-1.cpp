#include <string> 
#include <iostream>
#include <vector>
class LibraryBook
{
private:
    std::string isbn;
    std::string title;
    std::string author;
    int copies_available{0};
    int total_pages{};
    public:
        LibraryBook(std::string x, std::string y, std::string z, int pages)
        {
            isbn = x;
            title = y;
            author = z;
            total_pages = pages;
        }
        int addCopies(int qty)
        {
            copies_available = copies_available + qty;
            return copies_available;
        }
        void removeCopies(int qty)
        {
            copies_available = copies_available - qty; 
            if (copies_available < 0)
            {
                copies_available = 0;
                std::cout << "No more copies available" << std::endl;
            }
            else if (copies_available > 0)
            {
                std::cout << "Here you go!" << std::endl;
            }
        }
        void getBookInfo()
        {
            std::cout << "ISBN: " << isbn << std::endl; 
            std::cout << "Title: " << title << std::endl;
            std::cout << "Author: " << author << std::endl;
            std::cout << "Total pages: " << total_pages << std::endl;
            std::cout << "QTY: " << copies_available << std::endl;
            std::cout << "---------------" << std::endl;

        }


};

int main()
{
    LibraryBook book1("12345", "Lord of the Flies", "William Golding", 200);
    book1.addCopies(4);
    book1.removeCopies(5);
    book1.addCopies(2);
    book1.getBookInfo();
}