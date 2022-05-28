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
    ASSERT_EQ(result, 2);
}
