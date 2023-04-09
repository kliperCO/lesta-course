###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_CreateWindowAndRenderer

Create a window and default renderer.

## Syntax

```c
int SDL_CreateWindowAndRenderer(int width, int height, Uint32 window_flags, SDL_Window **window, SDL_Renderer **renderer);

```

## Function Parameters

|                      |                                                                                  |
| -------------------- | -------------------------------------------------------------------------------- |
| **width**            | the width of the window                                                          |
| **height**           | the height of the window                                                         |
| **window_flags**     | the flags used to create the window (see [SDL_CreateWindow](SDL_CreateWindow)()) |
| **window**           | a pointer filled with the window, or NULL on error                               |
| **renderer**         | a pointer filled with the renderer, or NULL on error                             |

## Return Value

Returns 0 on success or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_CreateRenderer](SDL_CreateRenderer)
* [SDL_CreateWindow](SDL_CreateWindow)

----
[CategoryAPI](CategoryAPI)

