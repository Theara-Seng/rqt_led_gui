#include <rqt_led_plugin/rqt_led_plugin_widget.h>
#include "ui_rqt_led_plugin_widget.h"
#include "QMessageBox"

led_pluginWidget::led_pluginWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::led_pluginWidget)

        
{  

    ui->setupUi(this);
}

led_pluginWidget::~led_pluginWidget()
{
    delete ui;

}
void led_pluginWidget::on_ledOff_clicked( )
{   
    msg.data=0;
    led_pub.publish(msg);
}

void led_pluginWidget::on_ledOn_clicked()
{ 
   msg.data=1;
   led_pub.publish(msg);
}

