/***************************************************************
 * The implementation file for the template class Fun 	 	 *
 ***************************************************************/

    #ifndef FUN_CPP
    #define FUN_CPP
    #include "fun.h"

    // Constructor
    template <typename T>
    Fun <T> :: Fun(T d)
    : data (d)
    {
    }

    // Destructor
    template <typename T>
    Fun <T> :: ~Fun()
    {
    }

    // Accessor Function
    template <typename T>
    T Fun <T> :: get() const
    {
        return data;
    }

    // Mutator Function
    template <typename T>
    void Fun <T> :: set(T d)
    {
        data = d;
    }

    #endif
