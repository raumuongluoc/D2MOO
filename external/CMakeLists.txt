
if(ENABLE_D2DETOURS_EMBEDDED_PATCHES)
  add_subdirectory(D2.Detours)
  
  # Look for D2SE first, then Diablo II.
  find_program(D2_EXE NAMES D2SE.exe "Game.exe" "Diablo II.exe"
    HINTS $ENV{D2SE}
    PATH_SUFFIXES "Diablo II"
  )
  if(D2_EXE)
    get_filename_component(D2_PATH ${D2_EXE} DIRECTORY CACHE)
  endif()
endif()
