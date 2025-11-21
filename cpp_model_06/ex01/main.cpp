#include "Serialize.hpp"

int main()
{
    Data* data = new Data(42, "42Network");
    std::cout << "Original Data address: " << &data << std::endl;
    std::cout << "Original Data content: "
              << data->Id << ", " << data->name << std::endl;

    // Serialize
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized value (uintptr_t): " << raw << std::endl;

    // Deserialize
    Data* restored = Serializer::deserialize(raw);
    std::cout << "Restored Data address: " << restored << std::endl;
    std::cout << "Restored Data content: "
              << restored->Id << ", " << restored->name << std::endl;

    delete data;
    return 0;
}
