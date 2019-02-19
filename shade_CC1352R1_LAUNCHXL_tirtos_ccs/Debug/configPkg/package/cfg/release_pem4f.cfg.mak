# invoke SourceDir generated makefile for release.pem4f
release.pem4f: .libraries,release.pem4f
.libraries,release.pem4f: package/cfg/release_pem4f.xdl
	$(MAKE) -f /Users/srinathpotnuru/Documents/ti_ccs/shade_CC1352R1_LAUNCHXL_tirtos_ccs/src/makefile.libs

clean::
	$(MAKE) -f /Users/srinathpotnuru/Documents/ti_ccs/shade_CC1352R1_LAUNCHXL_tirtos_ccs/src/makefile.libs clean

