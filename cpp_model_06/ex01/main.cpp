#include "Serialize.hpp"

int main()
{
    Data* data = new Data(42, "Network");
    std::cout << "Original Data address on STACK: " << &data << std::endl;
    std::cout << "Original Data address on HEAP: " << data << std::endl;
    std::cout << "Original Data content: "
              << data->Id << ", " << data->name << std::endl;

    std::cout << "size of uintptr_t: " << sizeof(uintptr_t) << std::endl;

    // Serialize
    std::cout << "==================================================" << std::endl;
    uintptr_t raw = Serializer::serialize(data);
    std::cout << "Serialized value (uintptr_t): " << raw << std::endl;
    std::cout << "==================================================" << std::endl;

    std::cout << "==================================================" << std::endl;
    // Deserialize
    Data* restored = Serializer::deserialize(raw);
    std::cout << "Restored Data address on STACK: " << &restored << std::endl;
    std::cout << "Restored Data address on HEAP: " << restored << std::endl;
    std::cout << "Restored Data content: "
              << restored->Id << ", " << restored->name << std::endl;
    std::cout << "==================================================" << std::endl;

    delete data;
    return 0;
}
