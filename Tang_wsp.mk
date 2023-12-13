.PHONY: clean All

All:
	@echo ----------Building project:[ tang_cpp - Release ]----------
	@cd "tang_cpp" && "$(MAKE)" -f "tang_cpp.mk"
clean:
	@echo ----------Cleaning project:[ tang_cpp - Release ]----------
	@cd "tang_cpp" && "$(MAKE)" -f "tang_cpp.mk" clean
