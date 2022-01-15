#ifndef UE4SS_SDK_UdpMessaging_HPP
#define UE4SS_SDK_UdpMessaging_HPP

#include "UdpMessaging_enums.hpp"

class UUdpMessagingSettings : UObject
{
    bool EnableTransport;
    bool bAutoRepair;
    bool bStopServiceWhenAppDeactivates;
    FString UnicastEndpoint;
    FString MulticastEndpoint;
    EUdpMessageFormat MessageFormat;
    uint8 MulticastTimeToLive;
    TArray<FString> StaticEndpoints;
    bool EnableTunnel;
    FString TunnelUnicastEndpoint;
    FString TunnelMulticastEndpoint;
    TArray<FString> RemoteTunnelEndpoints;
}

struct UUdpMockMessage
{
    TArray<uint8> Data;
}

#endif
