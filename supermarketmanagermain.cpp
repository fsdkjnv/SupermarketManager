#include "supermarketmanagermain.h"
#include "./ui_supermarketmanagermain.h"
#include "managerproduct.h"
using namespace std ;

SupermarKetmanagerMain::SupermarKetmanagerMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SupermarKetmanagerMain)
{
    ui->setupUi(this);
}

SupermarKetmanagerMain::~SupermarKetmanagerMain()
{
    delete ui;
}


void SupermarKetmanagerMain::on_pushButton_clicked()
{
    ManagerProduct manager(this);
    manager.setModal(true);
    manager.exec();
}

