###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_Log

Log a message with [SDL_LOG_CATEGORY_APPLICATION](SDL_LOG_CATEGORY_APPLICATION) and [SDL_LOG_PRIORITY_INFO](SDL_LOG_PRIORITY_INFO).

## Syntax

```c
void SDL_Log(SDL_PRINTF_FORMAT_STRING const char *fmt, ...) SDL_PRINTF_VARARG_FUNC(1);

```

## Function Parameters

|             |                                                                     |
| ----------- | ------------------------------------------------------------------- |
| **...**     | additional parameters matching % tokens in the `fmt` string, if any |

## Remarks

= * \param fmt a printf() style message format string

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_LogCritical](SDL_LogCritical)
* [SDL_LogDebug](SDL_LogDebug)
* [SDL_LogError](SDL_LogError)
* [SDL_LogInfo](SDL_LogInfo)
* [SDL_LogMessage](SDL_LogMessage)
* [SDL_LogMessageV](SDL_LogMessageV)
* [SDL_LogVerbose](SDL_LogVerbose)
* [SDL_LogWarn](SDL_LogWarn)

----
[CategoryAPI](CategoryAPI)

