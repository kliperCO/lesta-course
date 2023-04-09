###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_GetModState

Get the current key modifier state for the keyboard.

## Syntax

```c
SDL_Keymod SDL_GetModState(void);

```

## Return Value

Returns an OR'd combination of the modifier keys for the keyboard. See
[SDL_Keymod](SDL_Keymod) for details.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_GetKeyboardState](SDL_GetKeyboardState)
* [SDL_SetModState](SDL_SetModState)

----
[CategoryAPI](CategoryAPI)

