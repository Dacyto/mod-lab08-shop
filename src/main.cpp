#include "task.h"
#include <iostream>

int main()
{
    int cashboxes = 2;
    int intensity = 30;
    int speed = 10;
    int averageProducts = 3;
    int clients = 4;
  
    Shop supermarket(cashboxes, intensity, speed, averageProducts, clients);
    supermarket.startShopping();

    std::cout << "Число необслуженных клиентов: " << supermarket.getAmountONotfServedClients() << std::endl;
    std::cout << "Число обслуженных клиентов: " << supermarket.getAmountOfServedClients() << std::endl;
    std::cout << "Средняя длина очереди: " << supermarket.getAverageQueueLength() << std::endl;
    std::cout << "Среднее время пребывания покупателя в очереди и на кассе: " << supermarket.getAverageClientTime() << std::endl;
    std::cout << "Среднее время работы кассы: " << supermarket.getAverageCashboxWorktime() << std::endl;
    std::cout << "Среднее время простоя кассы: " << supermarket.getAverageCashboxDowntime() << std::endl;
    std::cout << "Вероятность отказа: " << supermarket.getPrej() << std::endl;
    std::cout << "относительная пропускная способность Q: " << supermarket.getQ() << std::endl;
    std::cout << "абсолютная пропускная способность A: " << supermarket.getA() << std::endl;
}
