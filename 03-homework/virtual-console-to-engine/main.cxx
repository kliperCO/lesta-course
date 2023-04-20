#include <cstdlib>
#include <iostream>
#include <memory>
#include <string_view>

#include "engine.hxx"

int main(int /*argc*/, char* /*argv*/[])
{
    std::unique_ptr<kliper::engine, void (*)(kliper::engine*)> engine(
            kliper::create_engine(), kliper::destroy_engine);

    std::string err = engine->initialize("");
    if (!err.empty())
    {
        std::cerr << err << std::endl;
        return EXIT_FAILURE;
    }

    bool continue_loop = true;
    while (continue_loop)
    {
        kliper::event event;

        while (engine->read_input(event))
        {
            std::cout << event << std::endl;
            if (event == kliper::event::turn_off)
            {
                continue_loop = false;
                break;
            }
        }
    }

    engine->uninitialize();

    return EXIT_SUCCESS;
}