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


SRCS =	src/main.c \
	src/memory.c 

INCLUDES +=  -I include/common/ \



ifndef  PLATFORM
$(warning please define platform Supported platforms PLATFORM = HOST OR MSP423 )
$(warning Setting platform as MSP432)
PLATFORM = MSP432
endif



ifeq ($(PLATFORM),MSP432)

SRCS +=	src/interrupts_msp432p401r_gcc.c \
		src/startup_msp432p401r_gcc.c \
		src/system_msp432p401r.c

INCLUDES += -I include/CMSIS/  \
	   			-I include/msp432/ 
endif
