###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_GetNumTouchFingers

Get the number of active fingers for a given touch device.

## Syntax

```c
int SDL_GetNumTouchFingers(SDL_TouchID touchID);

```

## Function Parameters

|                 |                          |
| --------------- | ------------------------ |
| **touchID**     | the ID of a touch device |

## Return Value

Returns the number of active fingers for a given touch device on success or
a negative error code on failure; call [SDL_GetError](SDL_GetError)() for
more information.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_GetTouchFinger](SDL_GetTouchFinger)

----
[CategoryAPI](CategoryAPI)

