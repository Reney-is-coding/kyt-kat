#include "mywindow.h"

void mywindow::edittextfrominput()
{
    _label->setText(_edit->text());
}

mywindow::mywindow()
{    
    _label = new QLabel("", this);
    _btn = new QPushButton("Quitter",this);
    _edit = new QLineEdit(this);
    _edit->setPlaceholderText("Entrez un message");
     QPushButton *validate = new QPushButton("Validez le texte");

     //Mise en forme
    _vlayout = new QVBoxLayout(this);
    _vlayout->addWidget(_label);
    _vlayout->addWidget(_edit);
    _vlayout->addWidget(validate);
    _vlayout->addWidget(_btn);

    //Création des events
   connect(_btn, SIGNAL(clicked(bool)), this, SLOT(close()));
   connect(validate, SIGNAL(pressed()), this, SLOT(edittextfrominput()));
}
