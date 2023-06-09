###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_Quit

Clean up all initialized subsystems.

## Syntax

```c
void SDL_Quit(void);

```

## Remarks

You should call this function even if you have already shutdown each
initialized subsystem with [SDL_QuitSubSystem](SDL_QuitSubSystem)(). It is
safe to call this function even in the case of errors in initialization.

You can use this function with atexit() to ensure that it is run when your
application is shutdown, but it is not wise to do this from a library or
other dynamically loaded code.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_Init](SDL_Init)
* [SDL_QuitSubSystem](SDL_QuitSubSystem)

----
[CategoryAPI](CategoryAPI)

