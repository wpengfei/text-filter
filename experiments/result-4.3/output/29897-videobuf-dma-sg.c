/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/media/v4l2-core/videobuf-dma-sg.c
static int videobuf_dma_init_user_locked(struct videobuf_dmabuf *dma,
{
default:
get_user_pages(current, current->mm,
get_user_pages: err=%d [%d]\n", err, dma->nr_pages);
}
