void *cpio_addr;
void initramfs_callback(int type, char *name, void *data, unsigned int size);
void cpio_callback(int type, char *name, void *data, unsigned int size);
int fdt_parser(unsigned long _dt_struct, unsigned long off_dt_strings, unsigned int totalsize, void (*callback)(int type, char *name, void *data, unsigned int size));
int fdt_traverse(void (*callback)(int type, char *name, void *data, unsigned int size));