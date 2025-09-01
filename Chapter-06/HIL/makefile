all:
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -nostdlib -T linker.ld -o firmware.elf main.c

clean:
	rm -f firmware.elf
