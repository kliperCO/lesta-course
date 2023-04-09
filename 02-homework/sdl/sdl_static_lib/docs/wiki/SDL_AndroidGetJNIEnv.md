###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_AndroidGetJNIEnv

Get the Android Java Native Interface Environment of the current thread.

## Syntax

```c
void * SDL_AndroidGetJNIEnv(void);

```

## Return Value

Returns a pointer to Java native interface object (JNIEnv) to which the
current thread is attached, or 0 on error.

## Remarks

This is the JNIEnv one needs to access the Java virtual machine from native
code, and is needed for many Android APIs to be usable from C.

The prototype of the function in SDL's code actually declare a void* return
type, even if the implementation returns a pointer to a JNIEnv. The
rationale being that the SDL headers can avoid including jni.h.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_AndroidGetActivity](SDL_AndroidGetActivity)

----
[CategoryAPI](CategoryAPI)

