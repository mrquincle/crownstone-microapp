APPLICATION_START_ADDRESS = 0x00069000;
/* We allow for 4 pages of flash */
APPLICATION_LENGTH = 0x4000;
/* RAM_R1_BASE = 0x20002380; */
/* RAM_R1_BASE = 0x200023A0; */
/* We set memory half way. */
RAM_R1_BASE = 0x2000B000;
/* We have 64 kB of RAM (hence RAM_APPLICATION_AMOUNT = 0x10000 - RAM_R1_BASE */
/* However, in this case we only want to use 2 kB of RAM (.data and .bss) */
RAM_APPLICATION_AMOUNT = 0x2000;
RAM_END = 0x20010000;
RAM_BLUENET_IPC_LENGTH = 0x100;
