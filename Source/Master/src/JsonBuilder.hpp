#ifndef JSONBUILDER_HPP
#define JSONBUILDER_HPP


#include <string.h>

class JsonBuilder
{
public:
    JsonBuilder();

    /// @brief Deserializes a JSON string into the given keys and values
    /// @param Json The input JSON string
    /// @param keys The keys to use
    /// @param values The values to use
    /// @param size The size of the keys and values arrays
    /// @return True if the deserialization was successful, false otherwise
    // bool Deserialize(std::string &Json, std::string keys[], int values[], int size);

    /// @brief Serializes a JSON string from the given keys and values
    /// @param keys The keys to use
    /// @param values The values to use
    /// @param size The size of the keys and values arrays
    /// @param output The output string
    /// @return True if the serialization was successful, false otherwise
    // bool Serialize(std::string keys[], int data[], int size, std::string &output);
};

#endif // JSONBUILDER_HPP
