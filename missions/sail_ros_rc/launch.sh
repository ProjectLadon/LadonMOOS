#!/bin/bash

set -x

export BASIC_RC_DIR=`exec pwd`
source ~/catkin_ws/devel/setup.bash
pAntler basic_rc_headless.moos &
roslaunch basic_rc_headless.launch  &
