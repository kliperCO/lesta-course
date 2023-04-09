###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_GetRendererInfo

Get information about a rendering context.

## Syntax

```c
int SDL_GetRendererInfo(SDL_Renderer *renderer, SDL_RendererInfo *info);

```

## Function Parameters

|                  |                                                                                                      |
| ---------------- | ---------------------------------------------------------------------------------------------------- |
| **renderer**     | the rendering context                                                                                |
| **info**         | an [SDL_RendererInfo](SDL_RendererInfo) structure filled with information about the current renderer |

## Return Value

Returns 0 on success or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_CreateRenderer](SDL_CreateRenderer)

----
[CategoryAPI](CategoryAPI)

