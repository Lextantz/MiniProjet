//#include "myserver.hpp"
#include "mywindow.hpp"

#include <QApplication>
#include <QWidget>


#include <iostream>

using namespace std;

#include <QtCore/QCoreApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    int nbrFenetre;

    cout << "Combien de fenetres voulez vous ? :" << endl;
            cin >> nbrFenetre;

     if (nbrFenetre < 2 )
         cout << "Au moins deux fenetre, recommencez!" << endl;
     else
     {
         for(int i=0; i < nbrFenetre; i++)
         {
             MyWindow *window = new MyWindow();
             window->show();
         }


     }



    //Myserver mServer;

    return app.exec();
}
