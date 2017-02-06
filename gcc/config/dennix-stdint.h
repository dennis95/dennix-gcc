#define UINT8_TYPE "unsigned char"
#define UINT16_TYPE (INT_TYPE_SIZE == 16 ? "unsigned int" : \
    SHORT_TYPE_SIZE == 16 ? "short unsigned int" : 0)
#define UINT32_TYPE (INT_TYPE_SIZE == 32 ? "unsigned int" : \
    SHORT_TYPE_SIZE == 32 ? "short unsigned int" : \
    LONG_TYPE_SIZE == 32 ? "long unsigned int" : 0)
#define UINT64_TYPE (INT_TYPE_SIZE == 64 ? "unsigned int" : \
    SHORT_TYPE_SIZE == 64 ? "short unsigned int" : \
    LONG_TYPE_SIZE == 64 ? "long unsigned int" : \
    LONG_LONG_TYPE_SIZE == 64 ? "long long unsigned int" : 0)

#define INT8_TYPE "signed char"
#define INT16_TYPE (INT_TYPE_SIZE == 16 ? "int" : \
    SHORT_TYPE_SIZE == 16 ? "short int" : 0)
#define INT32_TYPE (INT_TYPE_SIZE == 32 ? "int" : \
    SHORT_TYPE_SIZE == 32 ? "short int" : \
    LONG_TYPE_SIZE == 32 ? "long int" : 0)
#define INT64_TYPE (INT_TYPE_SIZE == 64 ? "int" : \
    SHORT_TYPE_SIZE == 64 ? "short int" : \
    LONG_TYPE_SIZE == 64 ? "long int" : \
    LONG_LONG_TYPE_SIZE == 64 ? "long long int" : 0)

#define UINT_LEAST8_TYPE "unsigned char"
#define UINT_LEAST16_TYPE "short unsigned int"
#define UINT_LEAST32_TYPE (SHORT_TYPE_SIZE >= 32 ? "short unsigned int" : \
    INT_TYPE_SIZE >= 32 ? "unsigned int" : "long unsigned int")
#define UINT_LEAST64_TYPE (SHORT_TYPE_SIZE >= 64 ? "short unsigned int" : \
    INT_TYPE_SIZE >= 64 ? "unsigned int" : \
    LONG_TYPE_SIZE >= 64 ? "long unsigned int" : "long long unsigned int")

#define INT_LEAST8_TYPE "signed char"
#define INT_LEAST16_TYPE "short int"
#define INT_LEAST32_TYPE (SHORT_TYPE_SIZE >= 32 ? "short int" : \
    INT_TYPE_SIZE >= 32 ? "int" : "long int")
#define INT_LEAST64_TYPE (SHORT_TYPE_SIZE >= 64 ? "short int" : \
    INT_TYPE_SIZE >= 64 ? "int" : \
    LONG_TYPE_SIZE >= 64 ? "long int" : "long long int")

#define UINT_FAST8_TYPE "unsigned int"
#define UINT_FAST16_TYPE "unsigned int"
#define UINT_FAST32_TYPE (INT_TYPE_SIZE >= 32 ? "unsigned int" : "long unsigned int")
#define UINT_FAST64_TYPE (INT_TYPE_SIZE >= 64 ? "unsigned int" : \
    LONG_TYPE_SIZE >= 64 ? "long unsigned int" : "long long unsigned int")

#define INT_FAST8_TYPE "int"
#define INT_FAST16_TYPE "int"
#define INT_FAST32_TYPE (INT_TYPE_SIZE >= 32 ? "int" : "long int")
#define INT_FAST64_TYPE (INT_TYPE_SIZE >= 64 ? "int" : \
    LONG_TYPE_SIZE >= 64 ? "long int" : "long long int")

#define UINTPTR_TYPE "long unsigned int"
#define INTPTR_TYPE "long int"
#define SIG_ATOMIC_TYPE "int"
