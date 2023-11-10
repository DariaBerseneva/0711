#ifndef CLOCK_H
#define CLOCK_H

#include "clock_global.h"
#include <QTimer>
#include <QLCDNumber>

class CLOCK_EXPORT Clock : public QLCDNumber
{
public:
    Clock(QWidget *parent = nullptr);
    void start();
    void stop();
    void reset();

private:
    int second;
    QTimer *timer;

private slots:
    void on_timer();
};

#endif // CLOCK_H
