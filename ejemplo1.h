#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include <QTimer>
#include "ui_counterDlg.h"



class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
    
public:
    QTimer *timer;
    int contador;
    ejemplo1();
    virtual ~ejemplo1();
    
public slots:
	void doButton();
	void updateScreen();
};

#endif // ejemplo1_H
