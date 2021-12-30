#ifndef _INGENIUM_CORE_COMMON_H
#define _INGENIUN_CORE_COMMON_H

#include <stdint.h>
#include <memory.h>
#include <stdlib.h>

/* Typedefs */

typedef char i8;
typedef unsigned char u8;
typedef short i16;
typedef unsigned short u16;
typedef int i32;
typedef unsigned int u32;
typedef long long i64;
typedef unsigned long long u64;
typedef i8 b8;
typedef i16 b16;
typedef i32 b32;
typedef float f32;
typedef double f64;

/* Useful Defines */

#define ARRAY_SIZE(arr) sizeof(arr) / sizeof(arr[0])
#define kilobytes(bytes) bytes * 1024
#define megabytes(bytes) kilobytes(bytes) * 1024
#define gigabytes(bytes) megabytes(bytes) * 1024

/* Platform Detection */

#ifdef _WIN32
#define INGENIUM_WINDOWS
#elif __linux__
#define INGENIUM_LINUX
#elif __apple__
#define INGENIUM_APPLE
#else
#error "[INGENIUM][ERROR][Common.h] Platform not yet supported."
#endif

#endif