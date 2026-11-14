# Generated from qtqa.pro.

cmake_minimum_required(VERSION 3.15.0)

project(QtQualityAssurance # special case
    VERSION 5.16.0
    DESCRIPTION "Qt Quality Assurance repo" # special case
    HOMEPAGE_URL "https://qt.io/"
    LANGUAGES CXX C
)

find_package(Qt5 ${PROJECT_VERSION} CONFIG REQUIRED COMPONENTS BuildInternals Core Test) # special case
find_package(Qt5 ${PROJECT_VERSION} CONFIG OPTIONAL_COMPONENTS Gui Widgets) # special case

# special case begin
qt_build_repo_begin()

if(BUILD_TESTING)
    add_subdirectory(scripts)
    add_subdirectory(tests)

    if(QT_NO_MAKE_TESTS)
        set_property(DIRECTORY scripts PROPERTY EXCLUDE_FROM_ALL TRUE)
        set_property(DIRECTORY tests PROPERTY EXCLUDE_FROM_ALL TRUE)
    endif()
endif()

qt_build_repo_end()
# special case end
