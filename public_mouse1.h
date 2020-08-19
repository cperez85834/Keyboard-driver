#ifndef _PUBLIC_HMOU
#define _PUBLIC_HMOU

#define IOCTL_LEFT            0x800
#define IOCTL_RIGHT			0x809
#define IOCTL_ABS            0x801
#define IOCTL_REL			0x802
#define IOCTL_X_REL            0x803
#define IOCTL_Y_REL            0x804
#define IOCTL_HOLD_LEFT            0x805
#define IOCTL_HOLD_RIGHT            0x806
#define IOCTL_RELEASE_LEFT            0x807
#define IOCTL_RELEASE_RIGHT            0x808

#define IOCTL_MOUFILTR_LEFT_CLICK CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_LEFT,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_MOUFILTR_RIGHT_CLICK CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_RIGHT,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_MOUFILTR_MOVE_ABSOLUTE CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_ABS,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_MOUFILTR_MOVE_RELATIVE CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_REL,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_MOUFILTR_MOVE_X_RELATIVE CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_X_REL,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_MOUFILTR_MOVE_Y_RELATIVE CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_Y_REL,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_MOUFILTR_HOLD_LEFT CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_HOLD_LEFT,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_MOUFILTR_HOLD_RIGHT CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_HOLD_RIGHT,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_MOUFILTR_RELEASE_LEFT CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_RELEASE_LEFT,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)

#define IOCTL_MOUFILTR_RELEASE_RIGHT CTL_CODE(	FILE_DEVICE_MOUSE,   \
                                        IOCTL_RELEASE_RIGHT,    \
										METHOD_IN_DIRECT,    \
										FILE_WRITE_DATA | FILE_READ_DATA)


#endif
