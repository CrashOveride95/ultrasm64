# convert binary to object file
$(BUILD_DIR)/%.szp.o: $(BUILD_DIR)/%.bin
	$(call print,Converting BIN to ELF:,$<,$@)
	$(V)$(LD) -r -b binary $< -o $@
	$(V)dd status=none if=$@ of=$(basename $@).tmp ibs=16 conv=sync 
	$(V)mv $(basename $@).tmp $@
	$(V)cp $@ $(subst $(BUILD_DIR),$(BUILD_DIR)/finalfs,$@)