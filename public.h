#ifndef _PUBLIC_HKEY
#define _PUBLIC_HKEY

#define IOCTL_INDEX             0x800
#define IOCTL_INPUT             0x801
#define IOCTL_SPECIAL             0x804
#define IOCTL_SHOLD             0x805
#define IOCTL_SRELEASE             0x806
#define IOCTL_HOLD             0x802
#define IOCTL_RELEASE             0x803
#define IOCTL_SCAN            0x807
#define IOCTL_READ            0x808
#define IOCTL_DISABLE            0x809
#define IOCTL_MBDISABLE            0x80a

#define IOCTL_KBFILTR_GET_KEYBOARD_ATTRIBUTES CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_INDEX,    \
                                                        METHOD_BUFFERED,    \
                                                        FILE_READ_DATA)

#define IOCTL_KBFILTR_SEND_INPUT CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_INPUT,    \
                                                        METHOD_IN_DIRECT,    \
                                                        FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_KBFILTR_SEND_SPECIAL CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_SPECIAL,    \
                                                        METHOD_IN_DIRECT,    \
                                                        FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_KBFILTR_HOLD_SPECIAL CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_SHOLD,    \
                                                        METHOD_IN_DIRECT,    \
                                                        FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_KBFILTR_RELEASE_SPECIAL CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_SRELEASE,    \
                                                        METHOD_IN_DIRECT,    \
                                                        FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_KBFILTR_HOLD_INPUT CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_HOLD,    \
                                                        METHOD_IN_DIRECT,    \
                                                        FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_KBFILTR_RELEASE_INPUT CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_RELEASE,    \
                                                        METHOD_IN_DIRECT,    \
                                                        FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_KBFILTR_SCAN_MEMORY CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_SCAN,    \
                                                        METHOD_IN_DIRECT,    \
                                                        FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_KBFILTR_READ_MEMORY CTL_CODE( FILE_DEVICE_KEYBOARD,   \
                                                        IOCTL_READ,    \
                                                        METHOD_IN_DIRECT,    \
                                                        FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_KBFILTR_DISABLE CTL_CODE( FILE_DEVICE_KEYBOARD,   \
														IOCTL_DISABLE, \
														METHOD_IN_DIRECT, \
														FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_KBFILTR_MBDISABLE CTL_CODE( FILE_DEVICE_KEYBOARD,   \
														IOCTL_MBDISABLE, \
														METHOD_IN_DIRECT, \
														FILE_WRITE_DATA | FILE_READ_DATA)


#endif
