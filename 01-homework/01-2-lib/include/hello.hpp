#pragma once

#ifdef __ANDROID__
#define MYAPP_EXPORT __attribute__((visibility("default")))
#elif defined(_WIN32)
#ifdef MYAPP_EXPORTS
#define MYAPP_EXPORT __declspec(dllexport)
#else
#define MYAPP_EXPORT __declspec(dllimport)
#endif
#else
#define MYAPP_EXPORT
#endif

#include <cstring>
#include <cstdio>

namespace HelloWorld {

    const char *const kHelloWorld = "Hello, World!\n";
    const std::size_t kHelloWorldLen = std::strlen(kHelloWorld);

    void print_hello_world();

}  // namespace HelloWorld