#ifndef RQT_LED_PLUGIN
#define RQT_LED_PLUGIN

#include <rqt_gui_cpp/plugin.h>
#include <std_msgs/String.h>
#include "ros/ros.h"
#include <std_msgs/Int16.h>
#include <rqt_led_plugin/rqt_led_plugin_widget.h>

namespace rqt_led_plugin {

class led_plugin : public rqt_gui_cpp::Plugin
{
public:
    led_plugin();

    void initPlugin(qt_gui_cpp::PluginContext& context) override;
    void shutdownPlugin() override;

    void saveSettings(qt_gui_cpp::Settings& plugin_settings, qt_gui_cpp::Settings& instance_settings) const override;
    void restoreSettings(const qt_gui_cpp::Settings& plugin_settings, const qt_gui_cpp::Settings& instance_settings) override;

private:
    led_pluginWidget *widget = nullptr;
   
};

}

#endif // RQT_LED_PLUGIN

