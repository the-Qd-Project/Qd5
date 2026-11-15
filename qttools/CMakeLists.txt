# Generated from qttools.pro.

cmake_minimum_required(VERSION 3.15.0)

project(QtTools
    VERSION 5.16.0
    DESCRIPTION "Qd Tools Libraries"
    HOMEPAGE_URL "https://qd.org.tr/"
    LANGUAGES CXX C
)

# special case begin
set(QT_REPO_NOT_WARNINGS_CLEAN TRUE)
find_package(Qt5 ${PROJECT_VERSION} CONFIG REQUIRED COMPONENTS BuildInternals Core Network)
find_package(Qt5 ${PROJECT_VERSION} CONFIG OPTIONAL_COMPONENTS Xml Widgets Quick QuickWidgets QmlDevTools Sql PrintSupport)
# special case end

qt_build_repo()
