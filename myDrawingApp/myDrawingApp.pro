#-------------------------------------------------
#
# Project created by QtCreator 2018-09-21T15:01:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myDrawingApp
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    canvas.cpp \
    drawcircledialog.cpp \
    circle.cpp \
    shape.cpp \
    group.cpp \
    line.cpp \
    rectangle.cpp \
    drawlinedialog.cpp \
    drawrectangledialog.cpp \
    tool.cpp \
    tools/drawcircletool.cpp \
    tools/drawlinetool.cpp \
    tools/drawrectangletool.cpp \
    tools/selectiontool.cpp

HEADERS  += mainwindow.h \
    canvas.h \
    drawcircledialog.h \
    circle.h \
    shape.h \
    group.h \
    line.h \
    rectangle.h \
    drawlinedialog.h \
    drawrectangledialog.h \
    tool.h \
    tools/drawcircletool.h \
    tools/drawlinetool.h \
    tools/drawrectangletool.h \
    tools/selectiontool.h

FORMS    += mainwindow.ui \
    drawcircledialog.ui \
    drawlinedialog.ui \
    drawrectangledialog.ui

RESOURCES += \
    resource.qrc
