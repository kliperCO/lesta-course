###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_HasEvents

Check for the existence of certain event types in the event queue.

## Syntax

```c
SDL_bool SDL_HasEvents(Uint32 minType, Uint32 maxType);

```

## Function Parameters

|                 |                                                                                                     |
| --------------- | --------------------------------------------------------------------------------------------------- |
| **minType**     | the low end of event type to be queried, inclusive; see [SDL_EventType](SDL_EventType) for details  |
| **maxType**     | the high end of event type to be queried, inclusive; see [SDL_EventType](SDL_EventType) for details |

## Return Value

Returns [SDL_TRUE](SDL_TRUE) if events with type >= `minType` and <=
`maxType` are present, or [SDL_FALSE](SDL_FALSE) if not.

## Remarks

If you need to check for a single event type, use
[SDL_HasEvent](SDL_HasEvent)() instead.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_HasEvents](SDL_HasEvents)

----
[CategoryAPI](CategoryAPI)

