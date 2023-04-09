###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_GetGrabbedWindow

Get the window that currently has an input grab enabled.

## Syntax

```c
SDL_Window* SDL_GetGrabbedWindow(void);

```

## Return Value

Returns the window if input is grabbed or NULL otherwise.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_GetWindowGrab](SDL_GetWindowGrab)
* [SDL_SetWindowGrab](SDL_SetWindowGrab)

----
[CategoryAPI](CategoryAPI)

