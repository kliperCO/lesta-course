###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_SetWindowTitle

Set the title of a window.

## Syntax

```c
int SDL_SetWindowTitle(SDL_Window *window, const char *title);

```

## Function Parameters

|                |                                          |
| -------------- | ---------------------------------------- |
| **window**     | the window to change                     |
| **title**      | the desired window title in UTF-8 format |

## Return Value

Returns 0 on success or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

This string is expected to be in UTF-8 encoding.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_GetWindowTitle](SDL_GetWindowTitle)

----
[CategoryAPI](CategoryAPI)

