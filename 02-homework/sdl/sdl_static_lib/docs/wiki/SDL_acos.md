###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_acos

Use this function to compute arc cosine of `x`.

## Syntax

```c
double SDL_acos(double x);

```

## Function Parameters

|           |                                   |
| --------- | --------------------------------- |
| **x**     | floating point value, in radians. |

## Return Value

Returns arc cosine of `x`.

## Remarks

The definition of `y = acos(x)` is `x = cos(y)`.

Domain: `-1 <= x <= 1`

Range: `0 <= y <= Pi`

## Version

This function is available since SDL 3.0.0.

----
[CategoryAPI](CategoryAPI)

