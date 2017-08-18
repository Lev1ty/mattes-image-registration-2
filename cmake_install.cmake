# Install script for directory: C:/Users/Adam Yu/Desktop/Registration

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/Registration")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/Adam Yu/Desktop/Registration/App/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/CHECK/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/Entry/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/Image/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/Path/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/Reader/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/ToVTKImage/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/Visualizer/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/VTKImageWrapper/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/VTKPiecewiseFunctionWrapper/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/VTKRendererWrapper/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/VTKRenderWindowInteractorWrapper/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/VTKRenderWindowWrapper/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/VTKSmartVolumeMapperWrapper/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/VTKVolumePropertyWrapper/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/VTKVolumeWrapper/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/Writer/cmake_install.cmake")
  include("C:/Users/Adam Yu/Desktop/Registration/VTKCompositeOpacity/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Users/Adam Yu/Desktop/Registration/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
