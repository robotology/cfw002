#VER=2.6.29.2
KVER=$(shell uname -r)
KSRC=/lib/modules/$(KVER)/build
MODULE_INSTALL_PATH=/lib/modules/$(KVER)/iCubDrivers/cfw002/LinuxDriver
MODULE_TARGET=cfw002.ko

obj-m := cfw002.o


all: driver

help:
	$(MAKE) -C $(KSRC) M=$(PWD) help

driver:	
	$(MAKE) -C $(KSRC) M=$(PWD) modules

clean: 
	$(MAKE) -C $(KSRC) M=$(PWD) clean
	@rm -f Module.symvers

install: $(MODULE_TARGET)
	mkdir -p $(MODULE_INSTALL_PATH)
	cp $(MODULE_TARGET) $(MODULE_INSTALL_PATH)/
