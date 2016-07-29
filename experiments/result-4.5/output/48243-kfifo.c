/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/lib/kfifo.c
static unsigned long kfifo_copy_from_user(struct __kfifo *fifo,
{
copy_from_user(fifo->data + off, from, l);
copy_from_user(fifo->data, from + l, len - l);
}
