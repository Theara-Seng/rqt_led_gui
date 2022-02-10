/* 
 * rosserial Subscriber Example
 * Blinks an LED on callback
 */

#include <ros.h>
#include <std_msgs/Int16.h>

ros::NodeHandle  nh;

void messageCb( const std_msgs::Int16& msg){
  if(msg.data==1){
     digitalWrite(13,1);   // blink the led
  }
  else{
     digitalWrite(13, 0);   // blink the led
  }
 
}

ros::Subscriber<std_msgs::Int16> sub("led_status", &messageCb );

void setup()
{ 
  pinMode(13, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{  
  nh.spinOnce();
  delay(1);
}
