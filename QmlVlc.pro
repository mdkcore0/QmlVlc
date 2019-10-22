QT += qml quick multimedia
TEMPLATE = lib

include(QmlVlc.pri)

INCLUDEPATH += /opt/local/include
LIBS += -L/opt/local/lib -lvlc

CONFIG += plugin c++11

DESTDIR = QmlVlc
TARGET = qmlvlc

target.path = $$[QT_INSTALL_QML]/QmlVlc
INSTALLS += target

qmldir.files += $$PWD/qmldir
qmldir.path += $$target.path
INSTALLS += qmldir
