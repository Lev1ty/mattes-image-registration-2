ADD_LIBRARY(VTKRenderWindowInteractorWrapper VTKRenderWindowInteractorWrapper.cpp)
TARGET_INCLUDE_DIRECTORIES(VTKRenderWindowInteractorWrapper PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
TARGET_LINK_LIBRARIES(VTKRenderWindowInteractorWrapper ${VTK_LIBRARIES} CHECK)
