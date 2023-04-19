#ifndef VIRTUAL_CONSOLE_ENGINE_HXX
#define VIRTUAL_CONSOLE_ENGINE_HXX

#include <iosfwd>
#include <string>
#include <string_view>

namespace kliper
{
/// SUP Game Box
    enum class event
    {
        /// input events
        button_left_pressed,
        button_left_released,
        button_right_pressed,
        button_right_released,
        button_up_pressed,
        button_up_released,
        button_down_pressed,
        button_down_released,
        button_select_pressed,
        button_select_released,
        button_start_pressed,
        button_start_released,
        button_y_pressed,
        button_y_released,
        button_x_pressed,
        button_x_released,
        button_a_pressed,
        button_a_released,
        button_b_pressed,
        button_b_released,
        /// virtual console events
        turn_off
    };

    std::ostream& operator<<(std::ostream& stream, const event& e);

    class engine;

/// return not null on success
    engine* create_engine();
    void destroy_engine(engine* e);

    class engine
    {
    public:
        virtual ~engine();
        /// create main window
        /// on success return empty string
        virtual std::string initialize(std::string_view config) = 0;
        /// pool event from input queue
        /// return true if event was written
        virtual bool read_input(event& e) = 0;
        virtual void uninitialize() = 0;
    };

}
#endif //VIRTUAL_CONSOLE_ENGINE_HXX
