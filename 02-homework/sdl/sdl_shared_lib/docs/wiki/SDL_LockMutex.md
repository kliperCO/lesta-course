###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_LockMutex

Lock the mutex.

## Syntax

```c
int SDL_LockMutex(SDL_mutex * mutex) SDL_ACQUIRE(mutex);

```

## Function Parameters

|               |                   |
| ------------- | ----------------- |
| **mutex**     | the mutex to lock |

## Return Value

Returns 0 on success or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

This will block until the mutex is available, which is to say it is in the
unlocked state and the OS has chosen the caller as the next thread to lock
it. Of all threads waiting to lock the mutex, only one may do so at a time.

It is legal for the owning thread to lock an already-locked mutex. It must
unlock it the same number of times before it is actually made available for
other threads in the system (this is known as a "recursive mutex").

## Version

This function is available since SDL 3.0.0.

----
[CategoryAPI](CategoryAPI)

