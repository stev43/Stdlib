/*
 *  Implementation of standard module Time
 */



#include "Time.h"

/******************************************************************/


time_t *SACgettime()
{
  time_t *res;
  
  res=(time_t*)SAC_MALLOC(sizeof(time_t));
  time(res);
  return(res);
}


/******************************************************************/

