import sys
from ROOT import gSystem
gSystem.Load("libCosmicRawDigit_CollectionOnly")
from ROOT import sample

try:

    print "PyROOT recognized your class %s" % str(sample)

except NameError:

    print "Failed importing CollectionOnly..."

sys.exit(0)

