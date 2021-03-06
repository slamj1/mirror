/// @file xed-syntax-enum.c

// This file was automatically generated.
// Do not edit this file.

#include <string.h>
#include <assert.h>
#include "xed-syntax-enum.h"

typedef struct {
    const char* name;
    xed_syntax_enum_t value;
} name_table_xed_syntax_enum_t;
static const name_table_xed_syntax_enum_t name_array_xed_syntax_enum_t[] = {
{"INVALID", XED_SYNTAX_INVALID},
{"XED", XED_SYNTAX_XED},
{"ATT", XED_SYNTAX_ATT},
{"INTEL", XED_SYNTAX_INTEL},
{"LAST", XED_SYNTAX_LAST},
{0, XED_SYNTAX_LAST},
};

        
xed_syntax_enum_t str2xed_syntax_enum_t(const char* s)
{
   const name_table_xed_syntax_enum_t* p = name_array_xed_syntax_enum_t;
   while( p->name ) {
     if (strcmp(p->name,s) == 0) {
      return p->value;
     }
     p++;
   }
        

   return XED_SYNTAX_INVALID;
}


const char* xed_syntax_enum_t2str(const xed_syntax_enum_t p)
{
   xed_syntax_enum_t type_idx = p;
   if ( p > XED_SYNTAX_LAST) type_idx = XED_SYNTAX_LAST;
   return name_array_xed_syntax_enum_t[type_idx].name;
}

xed_syntax_enum_t xed_syntax_enum_t_last(void) {
    return XED_SYNTAX_LAST;
}
       
/*

Here is a skeleton switch statement embedded in a comment


  switch(p) {
  case XED_SYNTAX_INVALID:
  case XED_SYNTAX_XED:
  case XED_SYNTAX_ATT:
  case XED_SYNTAX_INTEL:
  case XED_SYNTAX_LAST:
  default:
     xed_assert(0);
  }
*/
