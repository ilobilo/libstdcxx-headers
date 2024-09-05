# libstdcxx-headers
Please use: https://github.com/osdev0/libstdcxx-headers \
Freestanding libstdc++ headers that can be used in a kernel

Note: you might need to create a header named ``features.h`` and put this in it:
```c
#ifndef FEATURES_H
#define FEATURES_H

#define __GLIBC_PREREQ(maj, min) 0
#define __cpp_lib_out_ptr 0

#endif // FEATURES_H
```
