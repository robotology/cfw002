KVER=$(shell uname -r)
KSRC=/lib/modules/$(KVER)/build
MODULE_INSTALL_PATH=/lib/modules/$(KVER)/iCubDrivers/cfw002/LinuxDriver
MODULE_TARGET=cfw002.ko

obj-m := cfw002.o

all:  cfw002.o

cfw002.o: cfw002.c cfw002.h cfw002_hw.h debug.h
	$(MAKE) -C $(KSRC) M=$(PWD) modules

help:
	$(MAKE) -C $(KSRC) M=$(PWD) help

clean:
	$(MAKE) -C $(KSRC) M=$(PWD) clean
	@rm -f module/Module.symvers

install: $(MODULE_TARGET)
	mkdir -p $(MODULE_INSTALL_PATH)
	cp $(MODULE_TARGET) $(MODULE_INSTALL_PATH)/

uninstall:
	-rm -f $(MODULE_INSTALL_PATH)/$(MODULE_TARGET)
