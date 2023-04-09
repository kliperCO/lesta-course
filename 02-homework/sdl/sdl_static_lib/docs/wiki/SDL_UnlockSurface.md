###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_UnlockSurface

Release a surface after directly accessing the pixels.

## Syntax

```c
void SDL_UnlockSurface(SDL_Surface *surface);

```

## Function Parameters

|                 |                                                         |
| --------------- | ------------------------------------------------------- |
| **surface**     | the [SDL_Surface](SDL_Surface) structure to be unlocked |

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_LockSurface](SDL_LockSurface)

----
[CategoryAPI](CategoryAPI)

