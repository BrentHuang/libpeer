#ifndef PLATFORM_ADDRESS_H_
#define PLATFORM_ADDRESS_H_

#ifdef _WIN32
#include <ws2tcpip.h>
#else
#include <ifaddrs.h>
#include <netdb.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
#endif

#endif /* PLATFORM_ADDRESS_H_ */
