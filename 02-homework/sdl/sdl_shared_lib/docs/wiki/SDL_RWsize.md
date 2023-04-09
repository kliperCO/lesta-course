###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_RWsize

Use this function to get the size of the data stream in an [SDL_RWops](SDL_RWops).

## Syntax

```c
Sint64 SDL_RWsize(SDL_RWops *context);

```

## Function Parameters

|                 |                                                                    |
| --------------- | ------------------------------------------------------------------ |
| **context**     | the [SDL_RWops](SDL_RWops) to get the size of the data stream from |

## Return Value

Returns the size of the data stream in the [SDL_RWops](SDL_RWops) on
success, -1 if unknown or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

Prior to SDL 2.0.10, this function was a macro.

## Version

This function is available since SDL 3.0.0.

----
[CategoryAPI](CategoryAPI)

