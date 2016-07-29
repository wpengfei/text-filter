/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/lguest/core.c
void __lgread(struct lg_cpu *cpu, void *b, unsigned long addr, unsigned bytes)
{
copy_from_user(b, cpu->lg->mem_base + addr, bytes) != 0) {
copy_from_user should do this, but as we rely on it... */
}
