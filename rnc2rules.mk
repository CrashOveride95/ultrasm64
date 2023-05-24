# Compress binary file
$(BUILD_DIR)/%.szp: $(BUILD_DIR)/%.bin
	$(call print,Compressing:,$<,$@)
	$(V)$(RNCPACK) p $< $@ -m2
	$(V)dd status=none if=$@ of=$(basename $@).tmp ibs=16 conv=sync 
	$(V)mv $(basename $@).tmp $@
	$(V)cp $@ $(subst $(BUILD_DIR),$(BUILD_DIR)/finalfs,$@)

# convert binary szp to object file
$(BUILD_DIR)/%.szp.o: $(BUILD_DIR)/%.szp
	$(call print,Converting RNC2 to ELF:,$<,$@)
	$(V)$(LD) -r -b binary $< -o $@