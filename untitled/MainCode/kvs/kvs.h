#ifndef KVS_H
#define KVS_H

#include <QMainWindow>

namespace Ui {
class kvs;
}

class kvs : public QMainWindow
{
    Q_OBJECT

public:
    explicit kvs(QWidget *parent = 0);
    ~kvs();

private:
    Ui::kvs *ui;
};

#endif // KVS_H
