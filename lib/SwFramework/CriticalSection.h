/*
 * CriticalSection.h
 *
 *  Created on: 17.07.2017
 *      Author: Viktor Pankraz
 */

#ifndef Basics_CriticalSection_H
#define Basics_CriticalSection_H

#include "GlobalInterrupt.h"

class CriticalSection : public GlobalInterrupt
{
   ////    Constructors and destructors    ////

   public:

      inline CriticalSection()
      {
         sreg = SREG;
         disable();
      }

      inline ~CriticalSection()
      {
         SREG = sreg;
      }

      ////    Attributes    ////

   private:

      unsigned char sreg;
};

#endif

