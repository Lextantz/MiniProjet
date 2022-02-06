#include "inputbox.hpp"


InputBox::InputBox()
{

    this->sendButton = new QPushButton("Envoyer", this);
    this->message = new QTextEdit();

    //message->setPlaceholderText("Tapez votre message ici");

    QHBoxLayout *layout = new QHBoxLayout(this);

    layout->addWidget(message);
    layout->addWidget(sendButton);

    connect(sendButton, SIGNAL(clicked()), this, SLOT(envoiMessageBoite()));

    //QString message = QInputDialog::getText(this, "Taper message")

}

InputBox::~InputBox()
{

}

void InputBox::envoiMessageBoite(QString text)
{
   //qDebug() << message->setText() << endl;

    QString text = this->message->toPlainText();
    this->message->setPlainText("");

    if(text.length()>0)
        emit envoiMessageBoite(text);
}
