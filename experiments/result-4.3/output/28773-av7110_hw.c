/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/pci/ttpci/av7110_hw.c
int av7110_osd_cmd(struct av7110 *av7110, osd_cmd_t *dc)
{
case OSD_SetPalette:
get_user(r, colors + i * 4) ||
get_user(g, colors + i * 4 + 1) ||
get_user(b, colors + i * 4 + 2) ||
get_user(blend, colors + i * 4 + 3)) {
}
