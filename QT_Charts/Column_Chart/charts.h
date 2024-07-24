#ifndef CHARTS_H
#define CHARTS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Charts;
}
QT_END_NAMESPACE

class Charts : public QMainWindow
{
    Q_OBJECT

public:
    Charts(QWidget *parent = nullptr);
    ~Charts();

private:
    Ui::Charts *ui;
};
#endif // CHARTS_H
