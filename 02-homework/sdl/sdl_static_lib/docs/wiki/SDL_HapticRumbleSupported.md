###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_HapticRumbleSupported

Check whether rumble is supported on a haptic device.

## Syntax

```c
int SDL_HapticRumbleSupported(SDL_Haptic * haptic);

```

## Function Parameters

|                |                                           |
| -------------- | ----------------------------------------- |
| **haptic**     | haptic device to check for rumble support |

## Return Value

Returns [SDL_TRUE](SDL_TRUE) if effect is supported, [SDL_FALSE](SDL_FALSE)
if it isn't, or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_HapticRumbleInit](SDL_HapticRumbleInit)
* [SDL_HapticRumblePlay](SDL_HapticRumblePlay)
* [SDL_HapticRumbleStop](SDL_HapticRumbleStop)

----
[CategoryAPI](CategoryAPI)

