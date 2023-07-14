all: build
	@echo --------Building Example--------
	@${MAKE} --no-print-directory -C build -f Makefile

build: CMakeLists.txt
	@echo --------Running CMake for Example--------
	@cmake . -B build

clean:
	@rm -r build