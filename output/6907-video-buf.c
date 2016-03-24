/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/media/video/video-buf.c
int videobuf_dma_init_user(struct videobuf_dmabuf *dma, int direction,
{
get_user_pages(current,current->mm,
get_user_pages: err=%d [%d]\n",err,dma->nr_pages);
}
