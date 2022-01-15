#ifndef UE4SS_SDK_EngineMessages_HPP
#define UE4SS_SDK_EngineMessages_HPP

struct UEngineServiceNotification
{
    FString Text;
    double TimeSeconds;
}

struct UEngineServiceTerminate
{
    FString Username;
}

struct UEngineServiceExecuteCommand
{
    FString Command;
    FString Username;
}

struct UEngineServiceAuthGrant
{
    FString Username;
    FString UserToGrant;
}

struct UEngineServiceAuthDeny
{
    FString Username;
    FString UserToDeny;
}

struct UEngineServicePong
{
    FString CurrentLevel;
    int32 EngineVersion;
    bool HasBegunPlay;
    FGuid InstanceId;
    FString InstanceType;
    FGuid sessionId;
    float WorldTimeSeconds;
}

struct UEngineServicePing
{
}

#endif
