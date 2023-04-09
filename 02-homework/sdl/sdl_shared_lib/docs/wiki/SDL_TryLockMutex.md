###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_TryLockMutex

Try to lock a mutex without blocking.

## Syntax

```c
int SDL_TryLockMutex(SDL_mutex * mutex) SDL_TRY_ACQUIRE(0, mutex);

```

## Function Parameters

|               |                          |
| ------------- | ------------------------ |
| **mutex**     | the mutex to try to lock |

## Return Value

Returns 0, [`SDL_MUTEX_TIMEDOUT`](SDL_MUTEX_TIMEDOUT), or -1 on error; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

This works just like [SDL_LockMutex](SDL_LockMutex)(), but if the mutex is
not available, this function returns
[`SDL_MUTEX_TIMEOUT`](SDL_MUTEX_TIMEOUT) immediately.

This technique is useful if you need exclusive access to a resource but
don't want to wait for it, and will return to it to try again later.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_CreateMutex](SDL_CreateMutex)
* [SDL_DestroyMutex](SDL_DestroyMutex)
* [SDL_LockMutex](SDL_LockMutex)
* [SDL_UnlockMutex](SDL_UnlockMutex)

----
[CategoryAPI](CategoryAPI)

