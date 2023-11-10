QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/QuiLib/release/ -li01_lib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/QuiLib/debug/ -li01_lib
else:unix:!macx: LIBS += -L$$PWD/QuiLib/ -li01_lib

INCLUDEPATH += $$PWD/QuiLib/include
DEPENDPATH += $$PWD/QuiLib/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/Clock/release/ -lclock
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/Clock/debug/ -lclock

INCLUDEPATH += $$PWD/Clock/include
DEPENDPATH += $$PWD/Clock/include
