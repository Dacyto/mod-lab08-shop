#pragma once
#include <iostream>
#include <vector>
#include <random>
#include <queue>
#include <mutex>
#include <thread>

class Client {
public:
    std::vector<int> receipt;
    Client(std::vector<int> receipt);
};
