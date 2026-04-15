FILESEXTRAPATHS:prepend := "${THISDIR}/weston:"

PACKAGECONFIG:append = " pipewire"

SRC_URI:append = " file://0001-Revert-commit-68761d3f1.patch"
