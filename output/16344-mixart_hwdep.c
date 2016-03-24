/Users/wpf/Desktop/log/test/linux-2.6.9/sound/pci/mixart/mixart_hwdep.c
static int mixart_load_elf(mixart_mgr_t *mgr, snd_hwdep_dsp_image_t *dsp )
{
copy_from_user(&elf_header, dsp->image , sizeof(snd_mixart_elf32_ehdr_t)) )
copy_from_user( &elf_programheader, dsp->image + pos, sizeof(elf_programheader) ) )
copy_from_user_toio( MIXART_MEM( mgr, be32_to_cpu(elf_programheader.p_vaddr)),
}
static int mixart_hwdep_dsp_load(snd_hwdep_t *hw, snd_hwdep_dsp_image_t *dsp)
{
copy_from_user_toio(  MIXART_MEM( mgr, MIXART_MOTHERBOARD_XLX_BASE_ADDRESS),  dsp->image,  dsp->length))
copy_from_user_toio(  MIXART_MEM( mgr, val),  dsp->image,  dsp->length))
}
