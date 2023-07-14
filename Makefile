all: build
	@echo --------Building--------
	@${MAKE} --no-print-directory -C build -f Makefile

exampleApp:
	@${MAKE} --no-print-directory -C example -f Makefile

build: CMakeLists.txt
	@echo --------Running CMake--------
	@cmake . -B build

clean:
	@rm -r build
	@rm -r bin
	@${MAKE} clean --no-print-directory -C example -f Makefile