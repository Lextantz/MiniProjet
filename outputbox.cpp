#include "outputbox.hpp"

OutputBox::OutputBox()
{
    layout = new QVBoxLayout(this);

    messageRecu = new QTextEdit();

    layout->addWidget(messageRecu);
}

OutputBox::~OutputBox()
{

}

void OutputBox::receptionMessage()
{

}
