/*
 *  implementation of standard module StringC
 */


#include "StringC.h"


/*****************************************************************/

float SACstrtof16( string *remain, string input)
{
  float res;
  char *rem;
  
  res = (float) strtod( input, &rem);
  
  *remain = (string) SAC_MALLOC( strlen( rem) + 1);
  strcpy( *remain, rem);
  
  return( res);
}

/*****************************************************************/

float SACtof16( string input)
{
  return( (float) strtod( input, NULL));
}

/*****************************************************************/
