#include <iostream>
class objectcounter
{
private:
    static int count;

public:
    void createobj()
    {
        count++;
        std::cout << "object created successfully";
    }
    static void displaycount()
    {
        std::cout << "No of objects created:" << count << std::endl;
    }
};
int objectcounter::count = 0;
int main()
{
    int i, q;
    while (true)
    {
        std::cout << "1.Create an object\n2.Display the count\n3.Exit\n";
        std::cin >> q;
        i++;
        if (q == 1)
        {
            objectcounter o;
        }
        else if (q == 2)
        {
            objectcounter::displaycount();
        }
        else if (q == 3)
        {
            break;
        }
        else
        {
            std::cout << "Enter correct option";
        }
    }
}