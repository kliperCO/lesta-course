###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_LoadBMP_RW

Load a BMP image from a seekable SDL data stream.

## Syntax

```c
SDL_Surface* SDL_LoadBMP_RW(SDL_RWops *src,
                            int freesrc);

```

## Function Parameters

|                 |                                               |
| --------------- | --------------------------------------------- |
| **src**         | the data stream for the surface               |
| **freesrc**     | non-zero to close the stream after being read |

## Return Value

Returns a pointer to a new [SDL_Surface](SDL_Surface) structure or NULL if
there was an error; call [SDL_GetError](SDL_GetError)() for more
information.

## Remarks

The new surface should be freed with
[SDL_DestroySurface](SDL_DestroySurface)(). Not doing so will result in a
memory leak.

src is an open [SDL_RWops](SDL_RWops) buffer, typically loaded with
[SDL_RWFromFile](SDL_RWFromFile). Alternitavely, you might also use the
macro [SDL_LoadBMP](SDL_LoadBMP) to load a bitmap from a file, convert it
to an [SDL_Surface](SDL_Surface) and then close the file.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_DestroySurface](SDL_DestroySurface)
* [SDL_RWFromFile](SDL_RWFromFile)
* [SDL_LoadBMP](SDL_LoadBMP)
* [SDL_SaveBMP_RW](SDL_SaveBMP_RW)

----
[CategoryAPI](CategoryAPI)

