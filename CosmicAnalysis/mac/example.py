import sys
from ROOT import gSystem
gSystem.Load("libCosmicRawDigit_CosmicAnalysis")
from ROOT import sample

try:

    print "PyROOT recognized your class %s" % str(sample)

except NameError:

    print "Failed importing CosmicAnalysis..."

sys.exit(0)

