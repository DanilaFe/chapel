#!/usr/bin/env bash

# This script is to test that the current homebrew formula on homebrew-core master
# matches with the copy we keep in chapel-release.rb.

# This script will clone the homebrew-core repository and do a diff with the our version
# and the published version of the chapel formula.


set -e
set -x

UTIL_CRON_DIR=$(cd $(dirname ${BASH_SOURCE[0]}) ; pwd)
source $UTIL_CRON_DIR/functions.bash

export CHPL_HOME=$(cd $UTIL_CRON_DIR/../.. ; pwd)
log_info "Setting CHPL_HOME to: ${CHPL_HOME}"

log_info "Moving to ${CHPL_HOME}"
cd $CHPL_HOME

# This will clone the home-brew repository and compare the chapel-release.rb repo under
# util/packaging/homebrew
git clone --branch master --depth 1 https://github.com/Homebrew/homebrew-core.git

# compare the chapel.rb in homebrew-core with the one in our repository (chapel-release.rb)
# to catch any changes homebrew makes to the formula without telling us (might happen when they update deps, etc)
diff ./homebrew-core/Formula/c/chapel.rb ${CHPL_HOME}/util/packaging/homebrew/chapel-release.rb

FORMULA_CHANGED=$?
if [ $FORMULA_CHANGED -ne 0 ]
then
  log_error "Chapel formula in homebrew-core has been updated and does not match chapel-release.rb! Verify chapel formula in homebrew-core"
  exit 1
  else
  log_info "Chapel formula in homebrew-core matches chapel-release.rb, good"
fi
