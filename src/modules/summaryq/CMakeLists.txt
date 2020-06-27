include_directories( ${PROJECT_BINARY_DIR}/src/libcalamaresui )
calamares_add_plugin( summaryq
    TYPE viewmodule
    EXPORT_MACRO PLUGINDLLEXPORT_PRO
    SOURCES
        SummaryQmlViewStep.cpp
        Config.cpp
    UI
    LINK_PRIVATE_LIBRARIES
        calamaresui
    SHARED_LIB
    NO_CONFIG
)
