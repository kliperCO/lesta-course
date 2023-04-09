###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_RWclose

Close and free an allocated [SDL_RWops](SDL_RWops) structure.

## Syntax

```c
int SDL_RWclose(SDL_RWops *context);

```

## Function Parameters

|                 |                                           |
| --------------- | ----------------------------------------- |
| **context**     | [SDL_RWops](SDL_RWops) structure to close |

## Return Value

Returns 0 on success or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

[SDL_RWclose](SDL_RWclose)() closes and cleans up the
[SDL_RWops](SDL_RWops) stream. It releases any resources used by the stream
and frees the [SDL_RWops](SDL_RWops) itself with
[SDL_DestroyRW](SDL_DestroyRW)(). This returns 0 on success, or -1 if the
stream failed to flush to its output (e.g. to disk).

Note that if this fails to flush the stream to disk, this function reports
an error, but the [SDL_RWops](SDL_RWops) is still invalid once this
function returns.

Prior to SDL 2.0.10, this function was a macro.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_RWFromConstMem](SDL_RWFromConstMem)
* [SDL_RWFromFile](SDL_RWFromFile)
* [SDL_RWFromMem](SDL_RWFromMem)
* [SDL_RWread](SDL_RWread)
* [SDL_RWseek](SDL_RWseek)
* [SDL_RWwrite](SDL_RWwrite)

----
[CategoryAPI](CategoryAPI)

