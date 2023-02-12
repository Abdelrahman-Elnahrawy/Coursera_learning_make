#******************************************************************************
# Copyright (C) 2023 by Abdelrahman Selim - University of Colorado intro to embedded system course
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
# BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
# DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#
#*****************************************************************************


include sources.mk

# Architecture Specific Flags
CPU = cortex-m4
ARCH  = thumb
SPECS = nosys.specs
MARCH = armv7e-m
MFLOAT=hard	
FPU=fpv4-sp-d16 	
# Platform Specific Flags
LINKER_FILE = ../msp432p401r.lds

# Compile Defines
CC = arm-none-eabi-gcc
LD = arm-none-eabi-ld
TARGET = c1m2
LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
CFLAGS = -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) -mfloat-abi=$(MFLOAT) -march=$(MARCH) -mfpu=$(FPU) -Werror
CPPFLAGS =     -Wall -Werror -g -O0 -std=c99  

PRES = $(SRCS:.c=.i)						#Makeing a variable for PREPROCESSING OUTPUT
DEPS = $(SRCS:.c=.d)						#Makeing a variable for dependacy files (describe the files that were used to create compiled objects (. O files) by a C compiler)
ASMS = $(SRCS:.c=.asm) $(SRCS:.c=.s)		#Makeing a variable for assembly file (the file in assembly language)
OBJS = $(SRCS:.c=.o )						#Makeing a variable for object files (the compiled output of the single file without linking) 
ALL_TYPES = $(PRES) $(DEPS) $(ASMS) $(OBJS)



ifeq ($(PLATFORM),MSP432)
CC = arm-none-eabi-gcc
CPPFLAGS +=  -DMSP432 $(INCLUDES)
	else ifeq ($(PLATFORM),HOST)
CC = gcc
CPPFLAGS +=  -DHOST $(INCLUDES)
CFLAGS = 
LDFLAGS = 	
	else
$(warning platform not supported!)
$(warning Setting platform as MSP432)
endif

%.o : %.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@
%.i:%.c
	$(CC) -E $< $(CFLAGS) $(CPPFLAGS) -o $@
%.asm:%.c
	$(CC) -S $< $(CFLAGS) $(CPPFLAGS) -o $@
%.d:%.c
	$(CC) -M $< $(CFLAGS) $(CPPFLAGS) -o $@

.PHONY: build
build : all

.PHONY: all
all: $(TARGET).out
$(TARGET).out: $(SRCS)
	$(CC) $(SRCS) $(CFLAGS) $(LDFLAGS) $(CPPFLAGS) -o $@

.PHONY: clean
clean:
	rm -f $(ALL_TYPES)  $(TARGET).out $(TARGET).map





.PHONY: pre-all
pre-all:$(PRES)  	#Makeing a variable for PREPROCESSING OUTPUT

.PHONY: dep-all		#Makeing a variable for dependacy files (describe the files that were used to create compiled objects (. O files) by a C compiler)
dep-all:$(DEPS)	

.PHONY: asm-all 	#Makeing a variable for assembly file (the file in assembly language)
asm-all:$(ASMS)

.PHONY: obj-all 	#Makeing a variable for object files (the compiled output of the single file without linking) 
obj-all:$(OBJS)

.PHONY: compile-all #Makeing a variable for object files (the compiled output of the single file without linking) 
compile-all:$(OBJS)

