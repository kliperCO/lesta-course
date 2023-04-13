###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_RWseek

Seek within an [SDL_RWops](SDL_RWops) data stream.

## Syntax

```c
Sint64 SDL_RWseek(SDL_RWops *context,
                  Sint64 offset, int whence);

```

## Function Parameters

|                 |                                                                                                                         |
| --------------- | ----------------------------------------------------------------------------------------------------------------------- |
| **context**     | a pointer to an [SDL_RWops](SDL_RWops) structure                                                                        |
| **offset**      | an offset in bytes, relative to **whence** location; can be negative                                                    |
| **whence**      | any of [`SDL_RW_SEEK_SET`](SDL_RW_SEEK_SET), [`SDL_RW_SEEK_CUR`](SDL_RW_SEEK_CUR), [`SDL_RW_SEEK_END`](SDL_RW_SEEK_END) |

## Return Value

Returns the final offset in the data stream after the seek or -1 on error.

## Remarks

This function seeks to byte `offset`, relative to `whence`.

`whence` may be any of the following values:

- [`SDL_RW_SEEK_SET`](SDL_RW_SEEK_SET): seek from the beginning of data
- [`SDL_RW_SEEK_CUR`](SDL_RW_SEEK_CUR): seek relative to current read point
- [`SDL_RW_SEEK_END`](SDL_RW_SEEK_END): seek relative to the end of data

If this stream can not seek, it will return -1.

[SDL_RWseek](SDL_RWseek)() is actually a wrapper function that calls the
[SDL_RWops](SDL_RWops)'s `seek` method appropriately, to simplify
application development.

Prior to SDL 2.0.10, this function was a macro.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_RWclose](SDL_RWclose)
* [SDL_RWFromConstMem](SDL_RWFromConstMem)
* [SDL_RWFromFile](SDL_RWFromFile)
* [SDL_RWFromMem](SDL_RWFromMem)
* [SDL_RWread](SDL_RWread)
* [SDL_RWtell](SDL_RWtell)
* [SDL_RWwrite](SDL_RWwrite)

----
[CategoryAPI](CategoryAPI)

