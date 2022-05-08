#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main()
{
    std::cout << std::boolalpha
              << "one < two : " << json::object_comparator_t{}("one", "two") << "\n"
              << "three < four : " << json::object_comparator_t{}("three", "four") << std::endl;
}
