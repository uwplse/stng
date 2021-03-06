/* rose_config.h.  Generated from rose_config.h.in by configure.  */
/* rose_config.h.in.  Generated from configure.in by autoheader.  */
/* this public header generated by ../rose/scripts/publicConfiguration.pl */

/* Define to 1 if you have the <gcrypt.h> header file. */
/* #undef ROSE_HAVE_GCRYPT_H */

/* Define to 1 if you have the `gcrypt' library (-lgcrypt). */
/* #undef ROSE_HAVE_LIBGCRYPT */

/* Define to 1 if you have the <pthread.h> header file. */
#define ROSE_HAVE_PTHREAD_H 1

/* apple Operating System (OS) being used to build ROSE */
/* #undef ROSE_APPLE_OS_VENDOR */

/* Location (unquoted) of Boost specified on configure line. */
#define ROSE_BOOST_PATH "/home/demo/opt/boost-1.40.0"

/* Build ROSE to support the Binary Analysis */
#define ROSE_BUILD_BINARY_ANALYSIS_SUPPORT /**/

/* Build ROSE to support the CUDA langauge */
#define ROSE_BUILD_CUDA_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the C++ langauge */
#define ROSE_BUILD_CXX_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the C langauge */
#define ROSE_BUILD_C_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the Fortran langauge */
#define ROSE_BUILD_FORTRAN_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the Java langauge */
#define ROSE_BUILD_JAVA_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the OpenCL langauge */
#define ROSE_BUILD_OPENCL_LANGUAGE_SUPPORT /**/

/* Build ROSE to support the PHP langauge */
#define ROSE_BUILD_PHP_LANGUAGE_SUPPORT /**/

/* Build ROSE projects directory */
#define ROSE_BUILD_PROJECTS_DIRECTORY_SUPPORT /**/

/* Build ROSE to support the Python langauge */
/* #undef ROSE_BUILD_PYTHON_LANGUAGE_SUPPORT */

/* Build ROSE tests directory */
#define ROSE_BUILD_TESTS_DIRECTORY_SUPPORT /**/

/* Build ROSE tutorial directory */
#define ROSE_BUILD_TUTORIAL_DIRECTORY_SUPPORT /**/

/* CentOS Operating System (OS) being used to build ROSE */
/* #undef ROSE_CENTOS_OS_VENDOR */

/* Location of ROSE Compile Tree. */
#define ROSE_COMPILE_TREE_PATH "/home/demo/buildrose"

/* Debian Operating System (OS) being used to build ROSE */
/* #undef ROSE_DEBIAN_OS_VENDOR */

/* EDG major version number */
#define ROSE_EDG_MAJOR_VERSION_NUMBER 3

/* EDG minor version number */
#define ROSE_EDG_MINOR_VERSION_NUMBER 3

/* Defined when the Yices SMT-Solver library is present and should be used. */
/* #undef ROSE_HAVE_LIBYICES */

/* Location (unquoted) of the top directory path to which ROSE is installed.
   */
#define ROSE_INSTALLATION_PATH "/home/demo/data/compileTree/rose-inst"

/* OFP class path for Jave Virtual Machine */
#define ROSE_OFP_CLASSPATH /home/demo/buildrose/../rose/src/3rdPartyLibraries/antlr-jars/antlr-3.3-complete.jar:/home/demo/buildrose/../rose/src/3rdPartyLibraries/fortran-parser/OpenFortranParser-20111001.jar

/* OFP jar file */
#define ROSE_OFP_JAR_FILE OpenFortranParser-20111001.jar

/* OFP major version number */
#define ROSE_OFP_MAJOR_VERSION_NUMBER 0

/* OFP minor version number */
#define ROSE_OFP_MINOR_VERSION_NUMBER 8

/* OFP patch version number */
#define ROSE_OFP_PATCH_VERSION_NUMBER 3

/* OFP version number */
#define ROSE_OFP_VERSION_NUMBER 20111001

/* RedHat Operating System (OS) being used to build ROSE */
/* #undef ROSE_REDHAT_OS_VENDOR */

/* Git SCM version information for ROSE: commit identifier. */
#define ROSE_SCM_VERSION_ID "649317b5d3df3aee801cda1bad986d34cb73d6de"

/* Git SCM version information for ROSE: commit date (Unix timestamp). */
#define ROSE_SCM_VERSION_UNIX_DATE 1342579016

/* Variable like LD_LIBRARY_PATH */
#define ROSE_SHLIBPATH_VAR "LD_LIBRARY_PATH"

/* Location of ROSE Source Tree. */
#define ROSE_SOURCE_TREE_PATH "/home/demo/rose"

/* Define to __thread keyword for thread local storage. */
#define ROSE_THREAD_LOCAL_STORAGE __thread

/* Ubuntu Operating System (OS) being used to build ROSE */
#define ROSE_UBUNTU_OS_VENDOR 

/* Whether to use Candl support or not within ROSE */
/* #undef ROSE_USE_CANDL */

/* Use Clang for parsing C/C++-like languages */
/* #undef ROSE_USE_CLANG_FRONTEND */

/* Whether to use Cloog support or not within ROSE */
/* #undef ROSE_USE_CLOOG */

/* Whether to use CUDA language support or not within ROSE */
/* #undef ROSE_USE_CUDA_SUPPORT */

/* Whether to use the new EDG version 4.x */
/* #undef ROSE_USE_EDG_VERSION_4 */

/* Whether to use the new EDG version 4.3 */
/* #undef ROSE_USE_EDG_VERSION_4_3 */

/* Defined if Ether from Georgia Tech is available. */
/* #undef ROSE_USE_ETHER */

/* Whether to use the new interface to EDG */
/* #undef ROSE_USE_NEW_EDG_INTERFACE */

/* Whether to use OpenCL language support or not within ROSE */
/* #undef ROSE_USE_OPENCL_SUPPORT */

/* Whether to use Parma Polyhedral Library (PPL) support or not within ROSE */
/* #undef ROSE_USE_PPL */

/* Whether to use ScopLib support or not within ROSE */
/* #undef ROSE_USE_SCOPLIB */

/* Whether to use smaller (but more numerous) generated files for the ROSE IR
   */
/* #undef ROSE_USE_SMALLER_GENERATED_FILES */

/* Support for an advanced uniform warning level for ROSE development */
/* #undef ROSE_USE_UNIFORM_ADVANCED_WARNINGS_SUPPORT */

/* Use Valgrind calls in ROSE */
/* #undef ROSE_USE_VALGRIND */

/* Whether to use the new graph IR nodes compatability option with older API
   */
/* #undef ROSE_USING_GRAPH_IR_NODES_FOR_BACKWARD_COMPATABILITY */

/* Simple preprocessor as default in ROSE */
#define ROSE_WAVE_DEFAULT false

/* Location (unquoted) of Wave specified on configure line. */
#define ROSE_WAVE_PATH "/home/demo/opt/boost-1.40.0/wave"

/* Absolute name of yices executable, or the empty string. */
/* #undef ROSE_YICES */
