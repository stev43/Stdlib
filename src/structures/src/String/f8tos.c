/*
 *  implementation of standard module StringC
 */


#include "StringC.h"


/*****************************************************************/

string SACf8tos( float n)
{
  char *res;
  
  res = (char *) SAC_MALLOC( 60);

  sprintf( res, "%g", n);

  return( res);
}

/*****************************************************************/
