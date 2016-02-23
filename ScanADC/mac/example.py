import sys
from ROOT import gSystem
gSystem.Load("libCosmicRawDigit_ScanADC")
from ROOT import sample

try:

    print "PyROOT recognized your class %s" % str(sample)

except NameError:

    print "Failed importing ScanADC..."

sys.exit(0)

