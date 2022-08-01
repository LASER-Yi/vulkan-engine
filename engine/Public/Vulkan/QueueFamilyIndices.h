#include <optional>

struct QueueFamilyIndices {
    std::optional<uint32_t> graphicsFamily;
    std::optional<uint32_t> presentFamily;

    bool isValid() const
    {
        return graphicsFamily.has_value() && presentFamily.has_value();
    }
};