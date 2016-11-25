SHELL=/bin/sh
CLASS=W
SFILE=config/suite.def

default: header
	@ sys/print_instructions

BT: bt
bt: header
	cd BT; $(MAKE) CLASS=$(CLASS)

SP: sp
sp: header
	cd SP; $(MAKE) CLASS=$(CLASS)

LU: lu
lu: header
	cd LU; $(MAKE) CLASS=$(CLASS)

LU-HP: lu-hp
lu-hp: header
	cd LU-HP; $(MAKE) CLASS=$(CLASS)

MG: mg
mg: header
	cd MG; $(MAKE) CLASS=$(CLASS)

MG_stencil : header
	cd sys; $(MAKE) # build setparams
	cd common; $(CC) -c print_results.f randi8.f wtime.c  # build common/*.o
	cd MG; $(MAKE) MG_stencil CLASS=$(CLASS) # build stencil files

FT: ft
ft: header
	cd FT; $(MAKE) CLASS=$(CLASS)

IS: is
is: header
	cd IS; $(MAKE) CLASS=$(CLASS)

CG: cg
cg: header
	cd CG; $(MAKE) CLASS=$(CLASS)

EP: ep
ep: header
	cd EP; $(MAKE) CLASS=$(CLASS)

UA: ua
ua: header	       
	cd UA; $(MAKE) CLASS=$(CLASS)

DC: dc
dc: header	       
	cd DC; $(MAKE) CLASS=$(CLASS)

# Awk script courtesy cmg@cray.com, modified by Haoqiang Jin
suite:
	@ awk -f sys/suite.awk SMAKE=$(MAKE) $(SFILE) | $(SHELL)


# It would be nice to make clean in each subdirectory (the targets
# are defined) but on a really clean system this won't work
# because those makefiles need config/make.def
clean:
	- rm -f core 
	- rm -f *~ */core */*~ */*.o */npbparams.h */*.obj */*.exe
	- rm -f sys/setparams sys/makesuite sys/setparams.h
	- rm -f {DC/,}ADC.{logf,view,dat,viewsz,groupby,chunks}.* 

veryclean: clean
	- rm -f config/make.def config/suite.def 
	- rm -f bin/sp.* bin/lu.* bin/mg.* bin/ft.* bin/bt.* bin/is.*
	- rm -f bin/ep.* bin/cg.* bin/lu-hp.* bin/ua.* bin/dc.*

header:
	@ sys/print_header



