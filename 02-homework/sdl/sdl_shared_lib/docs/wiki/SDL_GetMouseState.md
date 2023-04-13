###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_GetMouseState

Retrieve the current state of the mouse.

## Syntax

```c
Uint32 SDL_GetMouseState(float *x, float *y);

```

## Function Parameters

|           |                                                                            |
| --------- | -------------------------------------------------------------------------- |
| **x**     | the x coordinate of the mouse cursor position relative to the focus window |
| **y**     | the y coordinate of the mouse cursor position relative to the focus window |

## Return Value

Returns a 32-bit button bitmask of the current button state.

## Remarks

The current button state is returned as a button bitmask, which can be
tested using the `SDL_BUTTON(X)` macros (where `X` is generally 1 for the
left, 2 for middle, 3 for the right button), and `x` and `y` are set to the
mouse cursor position relative to the focus window. You can pass NULL for
either `x` or `y`.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_GetGlobalMouseState](SDL_GetGlobalMouseState)
* [SDL_GetRelativeMouseState](SDL_GetRelativeMouseState)
* [SDL_PumpEvents](SDL_PumpEvents)

----
[CategoryAPI](CategoryAPI)

