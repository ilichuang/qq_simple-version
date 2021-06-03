#ifndef QQENTER_H
#define QQENTER_H

#include <QWidget>

namespace Ui {
class qqenter;
}

class qqenter : public QWidget
{
    Q_OBJECT

public:
    explicit qqenter(QWidget *parent = nullptr);
    ~qqenter();

private:
    Ui::qqenter *ui;
};

#endif // QQENTER_H
