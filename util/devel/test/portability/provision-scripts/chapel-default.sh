#!/usr/bin/env bash

PROVISION_SCRIPTS_DIR=$(cd $(dirname ${BASH_SOURCE[0]}) ; pwd)

if [ ! -d chapel ]
then
  $PROVISION_SCRIPTS_DIR/chapel-update.sh
fi

source $PROVISION_SCRIPTS_DIR/chapel-setmakej.sh

echo "cd chapel && source util/setchplenv.bash && make $MAKEJ && make check"
cd chapel && source util/setchplenv.bash && make $MAKEJ && make check
