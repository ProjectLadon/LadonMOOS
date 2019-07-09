# Operating System
Debian Stretch 32-bit

# ROS Installation
ROS Melodic, full installation (http://wiki.ros.org/melodic/Installation/Debian)

Create workspace in ~/catkin_ws with the following instructions, after the installation of ROS:
- ``mkdir -p ~/catkin_ws/src``
- ``cd ~/catkin_ws``
- ``catkin_make``

# Apt-get Packages
binutils
bzip2
cmake
autoconf
curl
gawk
gdb
g++-6
geographiclib-tools
graphviz
subversion
xterm
libfltk1.3-dev
freeglut3-dev
libpng12-dev
libjpeg-dev
libxft-dev
libxinerama-dev
libtiff5-dev
libboost-dev
librapidxml-dev
python-tornado
python-pymongo
python-twisted

# MOOS Installation

- Grab the code from subversion: ``svn co https://oceanai.mit.edu/svn/moos-ivp-aro/trunk/ moos-ivp``
- ``cd moos-ivp``
- ``./build-moos.sh``
- ``./build-ivp.sh``

# Hand Installation

## rapidjson

## nlohmann/json

## muparser

## tinyxml2

# Additional ROS packages

Generally, you need to fetch these git repositories into your catkin_ws/src directory. Once they're all available, call ``catkin_make`` from ~/catkin_ws. Note that rosbridge isn't here -- I haven't managed to install it on the VM (mostly for lack of trying).

## moos-ros-bridge

``git clone https://github.com/SyllogismRXS/moos-ros-bridge.git``

## cmake_modules

``git clone https://github.com/ros/cmake_modules.git``

## class_loader

``git clone https://github.com/ros/class_loader.git``

## diagnostics

``git clone https://github.com/ros/diagnostics.git``

## filters

``git clone https://github.com/ros/filters.git``

## pluginlib

## ros_canopen

## ros_control

## roslint
