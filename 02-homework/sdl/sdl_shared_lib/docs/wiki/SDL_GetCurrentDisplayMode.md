###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_GetCurrentDisplayMode

Get information about the current display mode.

## Syntax

```c
const SDL_DisplayMode* SDL_GetCurrentDisplayMode(SDL_DisplayID displayID);

```

## Function Parameters

|                   |                                         |
| ----------------- | --------------------------------------- |
| **displayID**     | the instance ID of the display to query |

## Return Value

Returns a pointer to the desktop display mode or NULL on error; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

There's a difference between this function and
[SDL_GetDesktopDisplayMode](SDL_GetDesktopDisplayMode)() when SDL runs
fullscreen and has changed the resolution. In that case this function will
return the current display mode, and not the previous native display mode.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_GetDesktopDisplayMode](SDL_GetDesktopDisplayMode)
* [SDL_GetDisplays](SDL_GetDisplays)

----
[CategoryAPI](CategoryAPI)

