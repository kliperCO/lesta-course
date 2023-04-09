###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_CreateCond

Create a condition variable.

## Syntax

```c
SDL_cond* SDL_CreateCond(void);

```

## Return Value

Returns a new condition variable or NULL on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_CondBroadcast](SDL_CondBroadcast)
* [SDL_CondSignal](SDL_CondSignal)
* [SDL_CondWait](SDL_CondWait)
* [SDL_CondWaitTimeout](SDL_CondWaitTimeout)
* [SDL_DestroyCond](SDL_DestroyCond)

----
[CategoryAPI](CategoryAPI)

