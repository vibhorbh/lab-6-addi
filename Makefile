
# Automatically generated by /Users/mshafae/github/cpsc120/cpsc-120-prompt-lab-06/.action/ccsrcutilities.py on 2023-10-06 21:40:46

TOPTARGETS = all clean spotless format lint header test unittest

SUBDIRS = $(wildcard part-?/.)

default all: all

$(TOPTARGETS): $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -f Makefile -C $@ $(MAKECMDGOALS)

.PHONY: $(TOPTARGETS) $(SUBDIRS)
