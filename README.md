# rqt_led_gui
Using QT designer to create a GUI with two buttons "On" and "Off" to control the led through Ros-serial 

## Using QT Designer to design the UI in order to plugin to rqt in ros

![QT Designer](https://user-images.githubusercontent.com/38048071/153422928-10bc883f-2cc9-4108-8c0b-e8474ce528e4.png)

Then write the C++ in QT Creator in order to publish the data to the arduino as well as some configuration

## Then Run the plugin to the rqt as shown in Figure below

![rqt_run](https://user-images.githubusercontent.com/38048071/153423233-a504cd2e-16bf-459e-9aa8-9b22897c8184.png)

## In the Pluigns, there is a rqt_plugin which we can find our custom rqt, then we get our rqt_plugin as shown

![rqt_plugin](https://user-images.githubusercontent.com/38048071/153423419-920ad7c0-5038-43ae-a91a-4f69aabffc8a.png)

## Now run the rosserial Arduino 

![rosserial](https://user-images.githubusercontent.com/38048071/153423495-21b12b5b-aab4-435e-8c77-991eb1fe844f.png)

### Then if we click the button "On" in the GUI we can see the led in the arduino Mega is on 
![led_on](https://user-images.githubusercontent.com/38048071/153424275-53c6a03c-e841-4f9e-aae3-e5b4ace10ab1.png)


###  If we click the button "Off" in the GUI we can see the the led in the arduino Mega is off
![led_off](https://user-images.githubusercontent.com/38048071/153424301-69833d1a-3c02-474f-9736-bd16f9c17d57.png)
