find_package( Qt5 ${QT_VERSION} CONFIG REQUIRED DBus Network )

set( _finished ${CMAKE_CURRENT_SOURCE_DIR}/../finished )
include_directories( ${PROJECT_BINARY_DIR}/src/libcalamaresui ${CMAKE_CURRENT_SOURCE_DIR}/../../libcalamares)

calamares_add_plugin( finishedq
    TYPE viewmodule
    EXPORT_MACRO PLUGINDLLEXPORT_PRO
    SOURCES
        FinishedQmlViewStep.cpp
        Config.cpp
    LINK_PRIVATE_LIBRARIES
        calamaresui
        Qt5::DBus
    SHARED_LIB
)
