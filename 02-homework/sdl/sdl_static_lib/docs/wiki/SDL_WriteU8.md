###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_WriteU8

Use this function to write a byte to an [SDL_RWops](SDL_RWops).

## Syntax

```c
size_t SDL_WriteU8(SDL_RWops * dst, Uint8 value);

```

## Function Parameters

|               |                                        |
| ------------- | -------------------------------------- |
| **dst**       | the [SDL_RWops](SDL_RWops) to write to |
| **value**     | the byte value to write                |

## Return Value

Returns 1 on success or 0 on failure; call [SDL_GetError](SDL_GetError)()
for more information.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_ReadU8](SDL_ReadU8)

----
[CategoryAPI](CategoryAPI)

