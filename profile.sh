#!/bin/bash

#. /cvmfs/hades.gsi.de/install/5.34.34/hydra2-4.9m/defall.sh
. /cvmfs/hades.gsi.de/install/root-5.34.34/bin/thisroot.sh 
export ROOTSYS=/cvmfs/hades.gsi.de/install/root-5.34.34

LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ROOTSYS/lib:/lustre/nyx/hades/user/iciepal/pion_beam_1.7/Pluto_cocktail/pluto_epem:
export LD_LIBRARY_PATH
