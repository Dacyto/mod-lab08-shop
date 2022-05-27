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
