// sem4.cpp 
# define M_PI          3.141592653589793238462643383279502884L /* pi */


#include "ball.h"
#include <iostream>
#include <chrono>
#include <thread>
int main()
{
    Ball orange_ball(Point{2, 3});

    orange_ball.push(10, M_PI/2);
    for (double t = 0; t = 10; t += 0.5)
    {
        orange_ball.fly(t);
        std::cout << "Pos x:" << orange_ball.position.x << std::endl;
        std::cout << "Pos y:" << orange_ball.position.y << std::endl;
        std::cout << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;

}


