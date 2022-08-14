#include <stdbool.h> 
#include <stdint.h>
#ifdef  _PLATFORM_TYPES_T 
  #ifndef _Bool 
  #define _Bool unsigned char 
  #endif 
  /* 
  #define CPU_TYPE        CPU_TYPE_32
  #define CPU_BIT_ORDER   MSB_FIRST 
  #define CPU_BYTE_ORDER  HIGH_BYTE_FIRST 
  */
  
  #ifndef FALSE 
  #define FALSE (boolean)false 
  #endif 
  
  #ifndef TRUE 
  #define TRUE (boolean)true 
  #endif 
  
  typedef _Bool     boolean  ; 
  typedef int8_t    sint8    ; 
  typedef uint8_t   uint8    ; 
  typedef char      char_t   ; 
  typedef int16_t   sint16   ; 
  typedef uint16_t  uint16   ;
  typedef int32_t   sint32   ; 
  typedef uint32_t  uint32   ;
#endif   