###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_RWread

Read from a data source.

## Syntax

```c
Sint64 SDL_RWread(SDL_RWops *context, void *ptr, Sint64 size);

```

## Function Parameters

|                 |                                                   |
| --------------- | ------------------------------------------------- |
| **context**     | a pointer to an [SDL_RWops](SDL_RWops) structure  |
| **ptr**         | a pointer to a buffer to read data into           |
| **size**        | the number of bytes to read from the data source. |

## Return Value

Returns the number of bytes read, 0 at end of file, -1 on error, and -2 for
data not ready with a non-blocking context.

## Remarks

This function reads up `size` bytes from the data source to the area
pointed at by `ptr`. This function may read less bytes than requested. It
will return zero when the data stream is completely read, or -1 on error.
For streams that support non-blocking operation, if nothing was read
because it would require blocking, this function returns -2 to distinguish
that this is not an error or end-of-file, and the caller can try again
later.

[SDL_RWread](SDL_RWread)() is actually a function wrapper that calls the
[SDL_RWops](SDL_RWops)'s `read` method appropriately, to simplify
application development.

It is an error to specify a negative `size`, but this parameter is signed
so you definitely cannot overflow the return value on a successful run with
enormous amounts of data.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_RWclose](SDL_RWclose)
* [SDL_RWFromConstMem](SDL_RWFromConstMem)
* [SDL_RWFromFile](SDL_RWFromFile)
* [SDL_RWFromMem](SDL_RWFromMem)
* [SDL_RWseek](SDL_RWseek)
* [SDL_RWwrite](SDL_RWwrite)

----
[CategoryAPI](CategoryAPI)

