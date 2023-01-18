#ifndef UE4SS_SDK_UdpMessaging_HPP
#define UE4SS_SDK_UdpMessaging_HPP

#include "UdpMessaging_enums.hpp"

struct FUdpMockMessage
{
    TArray<uint8> Data;

};

class UUdpMessagingSettings : public UObject
{
    bool EnabledByDefault;
    bool EnableTransport;
    bool bAutoRepair;
    float MaxSendRate;
    uint32 AutoRepairAttemptLimit;
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

};

#endif
