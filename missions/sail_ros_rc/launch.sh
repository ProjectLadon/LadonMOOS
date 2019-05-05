#!/bin/bash

set -x

export BASIC_RC_DIR = `exec pwd`
source ~/catkin_ws/devel/setup.bash
roslaunch basic_rc_headless.launch 
