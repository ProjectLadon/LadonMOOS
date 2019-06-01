#!/bin/bash

# set -x

export BASIC_RC_DIR=`exec pwd`
source ~/catkin_ws/devel/setup.bash
MOOSDB basic_rc_headless.moos  &
roslaunch basic_rc_headless.launch  &
sleep 20
pAntler basic_rc_headless.moos &
