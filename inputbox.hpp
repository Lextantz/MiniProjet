#ifndef INPUTBOX_HPP
#define INPUTBOX_HPP

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QInputDialog>
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>
#include <QBoxLayout>
#include <QDebug>
#include <QInputDialog>
#include <QTextEdit>


class InputBox : public QWidget
{
    Q_OBJECT

private:
    QPushButton *sendButton;
    QTextEdit *message;


public:
    InputBox();
    ~InputBox();

public slots:
    void messageRecu(QString text);


signals:
    void envoiMessageBoite(QString text);


};

#endif // INPUTBOX_HPP
