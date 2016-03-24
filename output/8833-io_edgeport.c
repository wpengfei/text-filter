/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/usb/serial/io_edgeport.c
static int edge_write (struct usb_serial_port *port, int from_user, const unsigned char *data, int count)
{
copy_from_user(&fifo->fifo[fifo->head], data, firsthalf))
copy_from_user(&fifo->fifo[fifo->head], &data[firsthalf], secondhalf))
}
