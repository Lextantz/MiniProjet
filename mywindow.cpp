#include "mywindow.hpp"


MyWindow::MyWindow() : QWidget()
{
    this->resize(500, 500);
    this->setWindowTitle("Boite de messagerie ");

    QVBoxLayout *layout = new QVBoxLayout(this);

    OutputBox *box2 = new OutputBox();
    InputBox *box1 = new InputBox();

    layout->addWidget(box2);
    layout->addWidget(box1);

    connect(InputBox,SIGNAL(envoiMessageBoite(QString text)),Mywindow, SLOT(messageRecu(QString text)));

}

MyWindow::~MyWindow()
{

}

void MyWindow::messageEnvoye()
{
    QVBoxLayout *layout1 = new QVBoxLayout(this);

    InputBox *box1 = new InputBox();
    layout1->addWidget(box1);

    connect(this, SIGNAL(envoiMessageBoite(QString)),
            this, SLOT(messageRecu(QString)));

}

void MyWindow::messageRecu(QString text)
{
    convWidget->displayMessage(new )
}


void MyWindow::centerOnScreen()
{
    QDesktopWidget screen;

    QRect screenGeom = screen.screenGeometry(this);

    int screenCenterX = screen.screenGeometry().x();
    int screenCenterY = screen.screenGeometry().y();

    move(screenCenterX - width() / 2,
        screenCenterY - height() / 2);

}
