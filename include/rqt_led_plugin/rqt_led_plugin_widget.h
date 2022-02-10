#ifndef RQT_LED_PLUGIN_WIDGET
#define RQT_LED_PLUGIN_WIDGET

#include <QWidget>
#include "ros/ros.h"
#include <std_msgs/Int16.h>
namespace Ui {
class led_pluginWidget;
}

class led_pluginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit led_pluginWidget(QWidget *parent = nullptr);
    ~led_pluginWidget();

private slots:

    void on_ledOff_clicked();

    void on_ledOn_clicked();
private:
    Ui::led_pluginWidget *ui;
    ros::NodeHandle nh;
    ros::Publisher led_pub=nh.advertise<std_msgs::Int16>("led_status",1000);
    std_msgs::Int16 msg;
};

#endif // RQT_LED_PLUGIN_WIDGET
