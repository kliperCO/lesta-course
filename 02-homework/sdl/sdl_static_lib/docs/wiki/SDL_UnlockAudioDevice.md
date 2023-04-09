###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_UnlockAudioDevice

Use this function to unlock the audio callback function for a specified device.

## Syntax

```c
void SDL_UnlockAudioDevice(SDL_AudioDeviceID dev);

```

## Function Parameters

|             |                                     |
| ----------- | ----------------------------------- |
| **dev**     | the ID of the device to be unlocked |

## Remarks

This function should be paired with a previous
[SDL_LockAudioDevice](SDL_LockAudioDevice)() call.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_LockAudioDevice](SDL_LockAudioDevice)

----
[CategoryAPI](CategoryAPI)

