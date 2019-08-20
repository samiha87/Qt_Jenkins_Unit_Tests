#ifndef TESTLOGIC_H
#define TESTLOGIC_H

#include <QObject>
#include <QtTest/QtTest>

class TestLogic: public QObject
{
    Q_OBJECT
public:
    TestLogic();

private slots:
    void TestMultiply();
    void TestDivisor();
};

#endif // TESTLOGIC_H
