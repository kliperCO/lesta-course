###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_GetWindowWMInfo

Get driver-specific information about a window.

## Syntax

```c
int SDL_GetWindowWMInfo(SDL_Window *window, SDL_SysWMinfo *info, Uint32 version);

```

## Function Parameters

|                 |                                                                                                       |
| --------------- | ----------------------------------------------------------------------------------------------------- |
| **window**      | the window about which information is being requested                                                 |
| **info**        | an [SDL_SysWMinfo](SDL_SysWMinfo) structure filled in with window information                         |
| **version**     | the version of info being requested, should be [SDL_SYSWM_CURRENT_VERSION](SDL_SYSWM_CURRENT_VERSION) |

## Return Value

Returns 0 on success or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

You must include [SDL_syswm](SDL_syswm).h for the declaration of
[SDL_SysWMinfo](SDL_SysWMinfo).

## Version

This function is available since SDL 3.0.0.

----
[CategoryAPI](CategoryAPI)

