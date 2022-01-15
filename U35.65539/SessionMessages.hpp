#ifndef UE4SS_SDK_SessionMessages_HPP
#define UE4SS_SDK_SessionMessages_HPP

struct USessionServiceLogUnsubscribe
{
}

struct USessionServiceLogSubscribe
{
}

struct USessionServiceLog
{
    FName Category;
    FString Data;
    FGuid InstanceId;
    double TimeSeconds;
    uint8 Verbosity;
}

struct USessionServicePong
{
    bool Authorized;
    FString BuildDate;
    FString DeviceName;
    FGuid InstanceId;
    FString InstanceName;
    FString PlatformName;
    FGuid sessionId;
    FString SessionName;
    FString SessionOwner;
    bool Standalone;
}

struct USessionServicePing
{
    FString Username;
}

#endif
