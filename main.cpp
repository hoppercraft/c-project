#include <iostream>
class Animal{
    public:
        bool alive=true;
    void eat(){
        std::cout << "This animal is eating \n";
    }
};
class Dog : public Animal{
};
int main(){
    Dog dog;
    std::cout << dog.alive << '\n';
    dog.eat();  
    return 0;
}
