//
//  less_functor.hpp
//  pa 5
//
//  Copyright © 2016 Melanie Woe. All rights reserved.
//


#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#include <string>

namespace CS2312
{
    
    template <class T>
    class less
    {
    public:
        bool operator() (const T &one, const T &two)
        {
            return (one < two);
        }
    };
    
    
   //c-string
    template <>
    class  less <const char *>
    {
    public:
        bool operator() (const string &one, const string &two)
        {
            string string_one, string_two;
            
            string_one = one;
            string_two = two;
            
            return (one < two);
        }
    };

    
    template <>
    class less<string>
    {
    public:
        bool operator() (const string &one, const string &two)
        {
            
            return (one < two);
        }
    };
    
}
#endif // UCD_CSCI2312_PA5_LESS_FUNCTOR_H

