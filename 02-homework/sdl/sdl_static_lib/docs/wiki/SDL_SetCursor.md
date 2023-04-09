###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_SetCursor

Set the active cursor.

## Syntax

```c
int SDL_SetCursor(SDL_Cursor * cursor);

```

## Function Parameters

|                |                         |
| -------------- | ----------------------- |
| **cursor**     | a cursor to make active |

## Return Value

Returns 0 on success or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

This function sets the currently active cursor to the specified one. If the
cursor is currently visible, the change will be immediately represented on
the display. [SDL_SetCursor](SDL_SetCursor)(NULL) can be used to force
cursor redraw, if this is desired for any reason.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_CreateCursor](SDL_CreateCursor)
* [SDL_GetCursor](SDL_GetCursor)

----
[CategoryAPI](CategoryAPI)

