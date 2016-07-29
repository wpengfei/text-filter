/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/pci/ivtv/ivtv-yuv.c
static int ivtv_yuv_prep_user_dma(struct ivtv *itv, struct ivtv_user_dma *dma,
{
get_user_pages(current, current->mm, y_dma.uaddr, y_dma.page_count, 0, 1, &dma->map[0], NULL);
get_user_pages(current, current->mm,
}
