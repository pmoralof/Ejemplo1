#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{ 
  setupUi(this);	
  show();
  connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
  timer = new QTimer();
  timer->start(1000);
  connect(timer, SIGNAL(timeout()), this, SLOT(updateScreen()) );
  contador=0;
}

ejemplo1::~ejemplo1()
{
}

void ejemplo1::doButton()
{
	if(timer->isActive()){
	  timer->stop();
	  button->setText("Start");
	}else{
	  timer->start();
	  button->setText("Stop");
	}
}

void ejemplo1::updateScreen()
{
    contador++;     
    lcdNumber->display(contador);
}




