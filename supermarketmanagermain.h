#ifndef SUPERMARKETMANAGERMAIN_H
#define SUPERMARKETMANAGERMAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SupermarKetmanagerMain; }
QT_END_NAMESPACE

class SupermarKetmanagerMain : public QMainWindow
{
    Q_OBJECT

public:
    SupermarKetmanagerMain(QWidget *parent = nullptr);
    ~SupermarKetmanagerMain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SupermarKetmanagerMain *ui;
};
#endif // SUPERMARKETMANAGERMAIN_H
