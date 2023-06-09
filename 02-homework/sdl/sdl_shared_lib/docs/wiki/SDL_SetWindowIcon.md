###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_SetWindowIcon

Set the icon for a window.

## Syntax

```c
int SDL_SetWindowIcon(SDL_Window *window, SDL_Surface *icon);

```

## Function Parameters

|                |                                                                            |
| -------------- | -------------------------------------------------------------------------- |
| **window**     | the window to change                                                       |
| **icon**       | an [SDL_Surface](SDL_Surface) structure containing the icon for the window |

## Return Value

Returns 0 on success or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Version

This function is available since SDL 3.0.0.

----
[CategoryAPI](CategoryAPI)

