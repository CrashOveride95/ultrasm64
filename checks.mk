ifeq ($(ISVPRINT),1)
ifdef UNF
$(error ISVPRINT and UNF cannot coexist)
endif
endif

ifeq ($(UNF),1)
ifdef ISVPRINT
$(error ISVPRINT and UNF cannot coexist)
endif
endif