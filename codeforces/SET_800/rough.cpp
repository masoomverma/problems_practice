#include <iostream>
#include <algorithm>
#include <vector>

class Person {
    public:
        std::string name;
        int age;

        Person(std::string name, int age) : name{ name }, age { age } {}
        bool operator < (const Person& p1) const {
            return age < p1.age;
        }
};

/*
int main() {
    std::vector<int> vec = {3, 6, 2, 5, 1, 0, 8, 4, 7, 9};
    std::sort(vec.begin(), vec.end(), std::less<>());
    for (auto &elm : vec) {
        std::cout << elm << " ";
    }
    
    return 0;
}
*/

int main() {
    std::vector<Person> per = {{"Smita", 19}, {"Masoom", 20}, {"Rohit", 17}, {"Harsh", 18}, {"Shivam", 16}, {"Rahul", 18}};

    std::sort(per.begin(), per.end(), std::less<Person>());
    for (auto &elm : per) {
        std::cout << elm.name << " : " << elm.age << std::endl;
    }
    
    return 0;
}