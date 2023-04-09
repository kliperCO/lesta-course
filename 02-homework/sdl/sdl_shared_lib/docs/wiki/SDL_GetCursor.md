###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_GetCursor

Get the active cursor.

## Syntax

```c
SDL_Cursor* SDL_GetCursor(void);

```

## Return Value

Returns the active cursor or NULL if there is no mouse.

## Remarks

This function returns a pointer to the current cursor which is owned by the
library. It is not necessary to free the cursor with
[SDL_DestroyCursor](SDL_DestroyCursor)().

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_SetCursor](SDL_SetCursor)

----
[CategoryAPI](CategoryAPI)

