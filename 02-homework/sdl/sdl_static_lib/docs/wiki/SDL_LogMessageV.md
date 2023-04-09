###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_LogMessageV

Log a message with the specified category and priority.

## Syntax

```c
void SDL_LogMessageV(int category,
                     SDL_LogPriority priority,
                     const char *fmt, va_list ap);

```

## Function Parameters

|                  |                                        |
| ---------------- | -------------------------------------- |
| **category**     | the category of the message            |
| **priority**     | the priority of the message            |
| **fmt**          | a printf() style message format string |
| **ap**           | a variable argument list               |

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_Log](SDL_Log)
* [SDL_LogCritical](SDL_LogCritical)
* [SDL_LogDebug](SDL_LogDebug)
* [SDL_LogError](SDL_LogError)
* [SDL_LogInfo](SDL_LogInfo)
* [SDL_LogMessage](SDL_LogMessage)
* [SDL_LogVerbose](SDL_LogVerbose)
* [SDL_LogWarn](SDL_LogWarn)

----
[CategoryAPI](CategoryAPI)

