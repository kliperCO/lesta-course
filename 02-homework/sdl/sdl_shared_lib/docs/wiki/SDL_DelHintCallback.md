###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_DelHintCallback

Remove a function watching a particular hint.

## Syntax

```c
void SDL_DelHintCallback(const char *name,
                         SDL_HintCallback callback,
                         void *userdata);

```

## Function Parameters

|                  |                                                                                                  |
| ---------------- | ------------------------------------------------------------------------------------------------ |
| **name**         | the hint being watched                                                                           |
| **callback**     | An [SDL_HintCallback](SDL_HintCallback) function that will be called when the hint value changes |
| **userdata**     | a pointer being passed to the callback function                                                  |

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_AddHintCallback](SDL_AddHintCallback)

----
[CategoryAPI](CategoryAPI)

