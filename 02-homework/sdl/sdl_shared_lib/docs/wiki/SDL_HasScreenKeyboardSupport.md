###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_HasScreenKeyboardSupport

Check whether the platform has screen keyboard support.

## Syntax

```c
SDL_bool SDL_HasScreenKeyboardSupport(void);

```

## Return Value

Returns [SDL_TRUE](SDL_TRUE) if the platform has some screen keyboard
support or [SDL_FALSE](SDL_FALSE) if not.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_StartTextInput](SDL_StartTextInput)
* [SDL_ScreenKeyboardShown](SDL_ScreenKeyboardShown)

----
[CategoryAPI](CategoryAPI)

