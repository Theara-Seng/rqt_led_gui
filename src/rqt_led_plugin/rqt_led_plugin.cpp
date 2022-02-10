#include <rqt_led_plugin/rqt_led_plugin.h>

#include <pluginlib/class_list_macros.h>
#include <ros/master.h>

namespace rqt_led_plugin {


led_plugin::led_plugin() :
    rqt_gui_cpp::Plugin()
{
    setObjectName("led_plugin");
    
    

}

void led_plugin::initPlugin(qt_gui_cpp::PluginContext &context)
{
    widget = new led_pluginWidget();
    context.addWidget(widget);

}

void led_plugin::shutdownPlugin()
{

}

void led_plugin::saveSettings(qt_gui_cpp::Settings &plugin_settings, qt_gui_cpp::Settings &instance_settings) const
{

}

void led_plugin::restoreSettings(const qt_gui_cpp::Settings &plugin_settings, const qt_gui_cpp::Settings &instance_settings)
{

}

} // end namespace rqt_led_plugin

PLUGINLIB_EXPORT_CLASS(rqt_led_plugin::led_plugin, rqt_gui_cpp::Plugin)
