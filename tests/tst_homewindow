#include <gtest/gtest.h>

#include "homewindow.h"
class HomeWindowTests : public ::testing::Test {
   protected:
    HomeWindow *homeWindow;

    void SetUp() override { homeWindow = new HomeWindow(); }

    void TearDown() override { delete homeWindow; }
};

TEST_F(HomeWindowTests, TestLoginFunctionality) {
    ASSERT_TRUE(homeWindow->connectToDatabase());  // Проверим, что подключение к БД успешное
}
