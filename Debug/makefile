################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

BUILD_ARTIFACT_NAME := W25Q256-STM32F767IGT-OpenDev
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
W25Q256-STM32F767IGT-OpenDev.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
W25Q256-STM32F767IGT-OpenDev.list \

OBJCOPY_BIN += \
W25Q256-STM32F767IGT-OpenDev.bin \


# All Target
all: main-build

# Main-build Target
main-build: W25Q256-STM32F767IGT-OpenDev.elf secondary-outputs

# Tool invocations
W25Q256-STM32F767IGT-OpenDev.elf: $(OBJS) $(USER_OBJS) D:\Code\STM32CubeIDE\W25Q256-STM32F767IGT-OpenDev\STM32F767IGTX_FLASH.ld
	arm-none-eabi-gcc -o "W25Q256-STM32F767IGT-OpenDev.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"D:\Code\STM32CubeIDE\W25Q256-STM32F767IGT-OpenDev\STM32F767IGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="W25Q256-STM32F767IGT-OpenDev.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

W25Q256-STM32F767IGT-OpenDev.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "W25Q256-STM32F767IGT-OpenDev.list"
	@echo 'Finished building: $@'
	@echo ' '

W25Q256-STM32F767IGT-OpenDev.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "W25Q256-STM32F767IGT-OpenDev.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
