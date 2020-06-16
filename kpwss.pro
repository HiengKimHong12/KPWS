QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gallery.cpp \
    gridwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    pdf.cpp \
    presentation.cpp \
    productplanning.cpp \
    todo.cpp \
    workspace.cpp \
    writer.cpp \
    yourfile.cpp

HEADERS += \
    gallery.h \
    gridwindow.h \
    mainwindow.h \
    pdf.h \
    presentation.h \
    productplanning.h \
    todo.h \
    workspace.h \
    writer.h \
    yourfile.h

FORMS += \
    gallery.ui \
    gridwindow.ui \
    mainwindow.ui \
    pdf.ui \
    presentation.ui \
    productplanning.ui \
    todo.ui \
    workspace.ui \
    writer.ui \
    yourfile.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource12.qrc \
    resource.qrc \
    resource13.qrc

DISTFILES += \
#    ../Documents/bold.svg \
    ../113.jpg \
    ../Documents/edit-tools (1).svg \
    ../Documents/edit-tools (2).svg \
    ../Documents/edit-tools.svg \
    ../Documents/type (1).svg \
    ../Documents/type (1).svg \
    ../Documents/type (1).svg \
    ../Downloads/Icon/background (1).svg \
    ../Downloads/Icon/background (1).svg \
    ../Downloads/Icon/bold.svg \
    ../Downloads/Icon/font (1).svg \
    ../Downloads/Icon/font (1).svg \
    ../Downloads/Icon/text (1).svg \
    ../Downloads/Icon/text (1).svg \
    ../Downloads/Icon/text (2).svg \
    ../Downloads/Icon/text (2).svg \
    ../Downloads/Icon/text-tool.svg \
    ../Downloads/Icon/type (2).svg \
    ../Downloads/Icon/type (2).svg \
    ../Downloads/pdf.svg \
    ../sunset.jpg
