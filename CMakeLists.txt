cmake_minimum_required(VERSION 3.10)
project(mathpack)

set(CMAKE_CXX_STANDARD 11)

add_library(mathpack mathpack.h rand.cpp rand.h rLatLon.cpp rLatLon.h rLatLonint.cpp rLatLonint.h
        rLine.cpp rLine.h rLine2D.cpp rLine2D.h rMatrix.cpp rMatrix.h rPoint.cpp rPoint.h rPoint2D.cpp rPoint2D.h
        rPointi.cpp rPointi.h rRect.cpp rRect.h rVector.cpp rVector.h rVectori.cpp rVectori.h)