find_path(IBase_INCLUDE_DIRS
  NAMES ibase.h
  HINTS ${IBase_INCLUDE_DIR})

set(ORACLE_OCI_NAMES clntsh ociei oraociei12)

find_library(IBase_LIBRARIES
  NAMES NAMES ${ORACLE_OCI_NAMES}
  HINTS ${IBase_LIBRARY_DIR})

if (NOT IBase_INCLUDE_DIRS STREQUAL "IBase_INCLUDE_DIRS-NOTFOUND" AND NOT IBase_LIBRARIES STREQUAL "IBase_LIBRARIES-NOTFOUND")
  set(IBase_FOUND ON)
endif()

if(IBase_FOUND AND NOT TARGET IBase::OCI)
  add_library(iBase::iBase UNKNOWN IMPORTED)
  set_target_properties(iBase::iBase PROPERTIES
                        IMPORTED_LOCATION "${IBase_LIBRARIES}"
                        INTERFACE_INCLUDE_DIRECTORIES "${IBase_INCLUDE_DIRS}")
endif()

mark_as_advanced(IBase_INCLUDE_DIRS IBase_LIBRARIES)

include(FeatureSummary)
set_package_properties(IBase PROPERTIES
  URL "https://i2group.com/solutions/i2-ibase"
  DESCRIPTION "IBase client library")
