# Common definitions for all DLLs.

# So that the project appear in IDEs with cmake >= 3.19
if(${CMAKE_VERSION} VERSION_GREATER 3.19.0)
  set(SOURCES_TRANSITIVE_USAGE PRIVATE)
else()
  set(SOURCES_TRANSITIVE_USAGE INTERFACE)
endif()

add_library(D2CommonDefinitions INTERFACE)
target_sources(D2CommonDefinitions
  ${SOURCES_TRANSITIVE_USAGE}
    include/D2Constants.h
    include/D2DataTables.h
    include/D2PacketDef.h
    include/D2QuestDataEx.h
    include/D2Structs.h
)
target_include_directories(D2CommonDefinitions INTERFACE include)
