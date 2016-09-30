DIRS    = lib src tests

# tools used in this file
RM      = rm -rf

# targets below ------------------------------------
all:
		for dir in $(DIRS); do  \
			($(MAKE) -C $$dir all); \
		done

help:
		@echo "run  'make <target>' where <target> is one of:"
		@echo "  <blank>  to build applications"
		@echo "  clean    to remove all inon-essential files"
		@echo "  run      to run primary application"
		@echo "  test     to run unit tests"
		@echo "  html     to build web pages in 'build/html'"
		@echo "  pdf      to build PDF docs in 'build'"
 
# remove all build files before committing to Git
clean:
		for dir in $(DIRS); do  \
			($(MAKE) -C $$dir clean); \
		done
		$(RM) build/*

# run the primary application
run:
		$(MAKE) -C src run

# run the unit test set
test:
		$(MAKE) -C tests run

# don't build docs unless specically asked 
html:
		$(MAKE) -C docs html

pdf:
		$(MAKE) -C docs pdf

.PHONY: all clean run test html pdf
