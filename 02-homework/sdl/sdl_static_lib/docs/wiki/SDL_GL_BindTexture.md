###### (This is the documentation for SDL3, which is under heavy development and the API is changing! [SDL2](https://wiki.libsdl.org/SDL2/) is the current stable version!)
# SDL_GL_BindTexture

Bind an OpenGL/ES/ES2 texture to the current context.

## Syntax

```c
int SDL_GL_BindTexture(SDL_Texture *texture, float *texw, float *texh);

```

## Function Parameters

|                 |                                                                                                              |
| --------------- | ------------------------------------------------------------------------------------------------------------ |
| **texture**     | the texture to bind to the current OpenGL/ES/ES2 context                                                     |
| **texw**        | a pointer to a float value which will be filled with the texture width or NULL if you don't need that value  |
| **texh**        | a pointer to a float value which will be filled with the texture height or NULL if you don't need that value |

## Return Value

Returns 0 on success or a negative error code on failure; call
[SDL_GetError](SDL_GetError)() for more information.

## Remarks

This is for use with OpenGL instructions when rendering OpenGL primitives
directly.

If not NULL, `texw` and `texh` will be filled with the width and height
values suitable for the provided texture. In most cases, both will be 1.0,
however, on systems that support the GL_ARB_texture_rectangle extension,
these values will actually be the pixel width and height used to create the
texture, so this factor needs to be taken into account when providing
texture coordinates to OpenGL.

You need a renderer to create an [SDL_Texture](SDL_Texture), therefore you
can only use this function with an implicit OpenGL context from
[SDL_CreateRenderer](SDL_CreateRenderer)(), not with your own OpenGL
context. If you need control over your OpenGL context, you need to write
your own texture-loading methods.

Also note that SDL may upload RGB textures as BGR (or vice-versa), and
re-order the color channels in the shaders phase, so the uploaded texture
may have swapped color channels.

## Version

This function is available since SDL 3.0.0.

## Related Functions

* [SDL_GL_MakeCurrent](SDL_GL_MakeCurrent)
* [SDL_GL_UnbindTexture](SDL_GL_UnbindTexture)

----
[CategoryAPI](CategoryAPI)

