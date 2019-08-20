#include <QtTest/QtTest>
#include "logic.h"

class TestLogic: public QObject
{
    Q_OBJECT
private slots:
    void TestMultiply();
    void TestMultiply2();
    void TestDivisor();
    void TestDivisor2();
};


void TestLogic::TestMultiply() {
    Logic logic;
    QVERIFY(static_cast<int>(logic.multiply(5, 5)) == 25);
}

void TestLogic::TestMultiply2() {
    Logic logic;
    QVERIFY(static_cast<int>(logic.multiply(5, 5)) != 20);
}

void TestLogic::TestDivisor() {
    Logic logic;
    QVERIFY(static_cast<int>(logic.division(20, 5)) == 4);
}

void TestLogic::TestDivisor2() {
    Logic logic;
    QVERIFY(static_cast<int>(logic.division(20, 5)) != 3);
}

QTEST_GUILESS_MAIN(TestLogic)
#include "testlogic.moc"

