// Copyright 2022 GHA Test Team
#include <gtest/gtest.h>
#include "../include/task.h"

TEST(TEST1, test1) {
    int cashboxes = 3;
    int intensity = 40;
    int speed = 15;
    int averageProducts = 3;
    int clients = 3;

    Shop supermarket(cashboxes, intensity, speed, averageProducts, clients);
    supermarket.startShopping();

    int result = supermarket.getAmountOfNotServedClients();
    ASSERT_EQ(result, 0);
}

TEST(TEST2, test2) {
    int cashboxes = 3;
    int intensity = 50;
    int speed = 15;
    int averageProducts = 5;
    int clients = 6;

    Shop supermarket(cashboxes, intensity, speed, averageProducts, clients);
    supermarket.startShopping();

    int result = supermarket.getAmountOfServedClients();
    ASSERT_EQ(result, 6);
}

TEST(TEST3, test3) {
    int cashboxes = 2;
    int intensity = 20;
    int speed = 15;
    int averageProducts = 10;
    int clients = 6;

    Shop supermarket(cashboxes, intensity, speed, averageProducts, clients);
    supermarket.startShopping();

    double result = supermarket.getAverageQueueLength();
    ASSERT_EQ(result, 3);
}

TEST(TEST4, test4) {
    int cashboxes = 2;
    int intensity = 30;
    int speed = 15;
    int averageProducts = 7;
    int clients = 10;

    Shop supermarket(cashboxes, intensity, speed, averageProducts, clients);
    supermarket.startShopping();

    double result = supermarket.getAverageClientTime();
    ASSERT_TRUE(result > 30);
}

TEST(TEST5, test5) {
    int cashboxes = 3;
    int intensity = 25;
    int speed = 12;
    int averageProducts = 5;
    int clients = 3;

    Shop supermarket(cashboxes, intensity, speed, averageProducts, clients);
    supermarket.startShopping();

    ASSERT_TRUE(supermarket.getAverageCashboxWorktime() > supermarket.getAverageClientTime());
}

TEST(TEST6, test6) {
    int cashboxes = 3;
    int intensity = 25;
    int speed = 25;
    int averageProducts = 12;
    int clients = 9;

    Shop supermarket(cashboxes, intensity, speed, averageProducts, clients);
    supermarket.startShopping();

    double result = supermarket.getAverageCashboxDowntime();
    ASSERT_EQ(result, 0);
}
