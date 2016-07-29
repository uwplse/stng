#ifndef TRANSLATOR_DEBUG_H
#define TRANSLATOR_DEBUG_H
#include <cstdlib>
#include <string>
#include <iostream>

namespace StencilTranslator {
/*
struct debug {
  int verbosity;

  debug(int v) : verbosity(v) { }

  template<typename T>
    debug &operator<<(T x) {
      std::cerr << x;
      return *this;
    }
};
*/
#ifndef NDEBUG
#define ASSERT(condition, message) \
  do { \
    if (! (condition)) { \
      std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
      << " line " << __LINE__ << ": " << message << std::endl; \
      std::exit(EXIT_FAILURE); \
    } \
  } while (false)
#else
#define ASSERT(condition, message) do { } while (false)
#endif


}
#endif
