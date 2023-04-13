###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_WaitEvent

Wait indefinitely for the next available event.

## Syntax

```c
int SDL_WaitEvent(SDL_Event *event);

```

## Function Parameters

|               |                                                                                                  |
| ------------- | ------------------------------------------------------------------------------------------------ |
| **event**     | the [SDL_Event](SDL_Event) structure to be filled in with the next event from the queue, or NULL |

## Return Value

Returns 1 on success or 0 if there was an error while waiting for events;
call [SDL_GetError](SDL_GetError)() for more information.

## Remarks

If `event` is not NULL, the next event is removed from the queue and stored
in the [SDL_Event](SDL_Event) structure pointed to by `event`.

As this function may implicitly call [SDL_PumpEvents](SDL_PumpEvents)(),
you can only call this function in the thread that initialized the video
subsystem.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_PollEvent](SDL_PollEvent)
* [SDL_PumpEvents](SDL_PumpEvents)
* [SDL_WaitEventTimeout](SDL_WaitEventTimeout)

----
[CategoryAPI](CategoryAPI)

