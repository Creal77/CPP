//
// Created by Enzo MARIONI on 16/10/2017.
//

#ifndef CPPLECTURES_ENGINE_H
#define CPPLECTURES_ENGINE_H


class Engine {
public:
    Engine(int fuel);
    bool start();
    void use(int consumed);
    void stop() const;
    void fill(int fuel);

protected:
    int fuel_;
};


#endif //CPPLECTURES_ENGINE_H
