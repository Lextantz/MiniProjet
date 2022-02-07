#ifndef MYWINDOW_HPP
#define MYWINDOW_HPP

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QDesktopWidget>
#include <QGridLayout>
#include <QPushButton>


#include "inputbox.hpp"
#include "outputbox.hpp"



class MyWindow : public QWidget
{
    Q_OBJECT

private:
    QGridLayout m_MainLayout;
    //QGridLayout box;

public:
    MyWindow();
   //MyWindow();
    ~MyWindow();



    void centerOnScreen();

public slots:
    void messageEnvoye();
    void messageRecu(QString text);




};

#endif // MYWINDOW_HPP
