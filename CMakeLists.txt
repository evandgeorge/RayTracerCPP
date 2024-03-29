cmake_minimum_required(VERSION 3.14)
project(RayTracerCPP)

include_directories(src)
add_subdirectory(test)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ray_Tracer main.cpp src/geometry/Vector3D.cpp src/geometry/Vector3D.h test/geometry/Vector3D_test.cpp src/geometry/Ray.cpp src/geometry/Ray.h test/geometry/Ray_test.cpp src/geometry/Shape.h src/geometry/Color.h test/geometry/Color_test.cpp src/geometry/Sphere.cpp src/geometry/Sphere.h test/geometry/Sphere_test.cpp src/scene/Screen.cpp src/scene/Screen.h test/scene/Screen_test.cpp src/scene/Camera.cpp src/scene/Camera.h src/lighting/Luminance.h src/lighting/Luminance.cpp src/lighting/LightSource.h src/geometry/SurfacePoint.h src/lighting/LightSource.cpp src/lighting/DirectionalLight.cpp src/lighting/DirectionalLight.h test/lighting/DirectionalLight_test.cpp src/scene/CameraCapture.cpp src/scene/CameraCapture.h src/geometry/Shape.cpp src/render/PixelData.cpp src/render/PixelData.h src/render/Pixel.h)
target_link_libraries(Ray_Tracer gtest gtest_main)