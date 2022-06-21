#cmake版本
cmake_minimum_required(VERSION 3.5.1)

#项目名称
project(Minesweeper)

#让cmake自动去寻找Qt5
FIND_PACKAGE(Qt5 COMPONENTS Widgets REQUIRED)

#采用C++11标准
set(CMAKE_CXX_STANDARD 11)

#添加所有的源文件
SET(Minesweeper_SOURCES 
	main.cpp 
	mainwindow.cpp 
	Students.cpp

)

#添加所有的头文件
SET(Minesweeper_HEADERS 
	mainwindow.h
	Students.h
)

#添加所有的.ui文件
SET(Minesweeper_FORMS 
	mainwindow.ui
)

#添加资源文件
SET(Minesweeper_RESOURCES 
	images.qrc
)
#调用预编译器moc，需要使用 QT5_WRAP_CPP宏
QT5_WRAP_CPP(Minesweeper_HEADERS_MOC ${Minesweeper_HEADERS})
#使用uic处理.ui文件
QT5_WRAP_UI(Minesweeper_FORMS_HEADERS ${Minesweeper_FORMS})
#使用rcc处理.qrc文件
QT5_ADD_RESOURCES(Minesweeper_RESOURCES_RCC ${Minesweeper_RESOURCES})

#这些生成的中间文件都会在build目录下，这样的话，编译器则不能定位由uic程序产生的诸如_ui_mainwindow.h等文件。所以，我们需要把build目录添加到包含目录中
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

#生成可执行文件
ADD_EXECUTABLE(Minesweeper 
	${Minesweeper_SOURCES} 
	${Minesweeper_HEADERS_MOC} 
    ${Minesweeper_FORMS_HEADERS}
	${Minesweeper_RESOURCES_RCC} 
)

#为target添加需要链接的共享库
TARGET_LINK_LIBRARIES(Minesweeper ${Qt5Widgets_LIBRARIES})