#ifndef UE4SS_SDK_TcpMessaging_HPP
#define UE4SS_SDK_TcpMessaging_HPP

class UTcpMessagingSettings : public UObject
{
    bool EnableTransport;
    FString ListenEndpoint;
    TArray<FString> ConnectToEndpoints;
    int32 ConnectionRetryDelay;
    bool bStopServiceWhenAppDeactivates;

};

#endif
