#!/usr/bin/env bash
#
# GPU native testing using cpu-as-device mode on a Cray CS (using none for
# CHPL_COMM)

CWD=$(cd $(dirname ${BASH_SOURCE[0]}) ; pwd)
source $CWD/common-native-gpu.bash

export CHPL_GPU=cpu
export CHPL_COMM=none
export CHPL_GPU_NO_CPU_MODE_WARNING=y

export CHPL_NIGHTLY_TEST_CONFIG_NAME="gpu-cpu"
$CWD/nightly -cron ${nightly_args}
