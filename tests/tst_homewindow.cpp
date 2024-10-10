#include <QtTest>

#include "homewindow.h"

class HomeWindowTest : public QObject {
    Q_OBJECT

   private slots:
    void testDatabaseConnection() {
        HomeWindow window;
        QVERIFY(window.connectToDatabase());  // Проверяем, что подключение к БД успешно
    }

    void testUIElements() {
        HomeWindow window;
        QVERIFY(window.findChild<QPushButton*>("loginButton"));  // Проверяем, что кнопка логина присутствует
        QVERIFY(window.findChild<QPushButton*>("registerButton"));  // Проверяем, что кнопка регистрации присутствует
    }
};

QTEST_MAIN(HomeWindowTest)
// #include "tst_homewindow.moc"
