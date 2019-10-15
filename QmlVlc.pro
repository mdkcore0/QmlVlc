QT += qml quick multimedia
TEMPLATE = lib

include(QmlVlc.pri)

INCLUDEPATH += /opt/local/include
LIBS += -L/opt/local/lib -lvlc

CONFIG += plugin c++11

DESTDIR = QmlVlc
TARGET = qmlvlc

QMAKE_POST_LINK = $$QMAKE_COPY $$PWD/qmldir $$OUT_PWD/$$DESTDIR

target.path = $$[QT_INSTALL_QML]/QmlVlc
target.files = qmldir
INSTALLS += target
