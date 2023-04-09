###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_CreateMutex

Create a new mutex.

## Syntax

```c
SDL_mutex* SDL_CreateMutex(void);

```

## Return Value

Returns the initialized and unlocked mutex or NULL on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

All newly-created mutexes begin in the _unlocked_ state.

Calls to [SDL_LockMutex](SDL_LockMutex)() will not return while the mutex
is locked by another thread. See [SDL_TryLockMutex](SDL_TryLockMutex)() to
attempt to lock without blocking.

SDL mutexes are reentrant.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_DestroyMutex](SDL_DestroyMutex)
* [SDL_LockMutex](SDL_LockMutex)
* [SDL_TryLockMutex](SDL_TryLockMutex)
* [SDL_UnlockMutex](SDL_UnlockMutex)

----
[CategoryAPI](CategoryAPI)

