#include <iostream>
#include "Platform.h"

int main()
{
    PlatformInfo platform(
        Platform::Xbox,
        PlatformVersion::Xbox360
    );

    if (!platform.isValid())
    {
        std::cout << "Invalid platform combination.\n";
        return 1;
    }

    std::cout << "Platform is valid.\n";

    return 0;
}