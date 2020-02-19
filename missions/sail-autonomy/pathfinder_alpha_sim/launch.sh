#!/bin/bash

# set -x

export PATHFINDER_SIM_DIR=`exec pwd`
source ~/catkin_ws/devel/setup.bash
MOOSDB pathfinder_alpha_sim.moos  &
roslaunch pathfinder_alpha_sim.launch  &
sleep 20
pAntler pathfinder_alpha_sim.moos &
