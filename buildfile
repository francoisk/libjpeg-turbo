./: {*/ -build/ -upstream/}                                             \
    doc{README.md libjpeg.txt example.txt ChangeLog.md change.log}      \
    legal{LICENSE.md README.ijg} manifest

# Don't install tests.
#
tests/: install = false
