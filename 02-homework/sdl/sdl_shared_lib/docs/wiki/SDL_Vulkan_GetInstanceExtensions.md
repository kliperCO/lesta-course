###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_Vulkan_GetInstanceExtensions

Get the names of the Vulkan instance extensions needed to create a surface with [SDL_Vulkan_CreateSurface](SDL_Vulkan_CreateSurface).

## Syntax

```c
SDL_bool SDL_Vulkan_GetInstanceExtensions(unsigned int *pCount,
                                          const char **pNames);

```

## Function Parameters

|                |                                                                                       |
| -------------- | ------------------------------------------------------------------------------------- |
| **pCount**     | A pointer to an unsigned int corresponding to the number of extensions to be returned |
| **pNames**     | NULL or a pointer to an array to be filled with required Vulkan instance extensions   |

## Return Value

Returns [SDL_TRUE](SDL_TRUE) on success, [SDL_FALSE](SDL_FALSE) on error.

## Remarks

This should be called after either calling
[SDL_Vulkan_LoadLibrary](SDL_Vulkan_LoadLibrary)() or creating an
[SDL_Window](SDL_Window) with the [`SDL_WINDOW_VULKAN`](SDL_WINDOW_VULKAN)
flag.

If `pNames` is NULL, then the number of required Vulkan instance extensions
is returned in `pCount`. Otherwise, `pCount` must point to a variable set
to the number of elements in the `pNames` array, and on return the variable
is overwritten with the number of names actually written to `pNames`. If
`pCount` is less than the number of required extensions, at most `pCount`
structures will be written. If `pCount` is smaller than the number of
required extensions, [SDL_FALSE](SDL_FALSE) will be returned instead of
[SDL_TRUE](SDL_TRUE), to indicate that not all the required extensions were
returned.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_Vulkan_CreateSurface](SDL_Vulkan_CreateSurface)

----
[CategoryAPI](CategoryAPI)

