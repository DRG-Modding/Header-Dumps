#ifndef UE4SS_SDK_EngineMessages_HPP
#define UE4SS_SDK_EngineMessages_HPP

struct FEngineServiceNotification
{
    FString Text;
    double TimeSeconds;

};

struct FEngineServiceTerminate
{
    FString Username;

};

struct FEngineServiceExecuteCommand
{
    FString Command;
    FString Username;

};

struct FEngineServiceAuthGrant
{
    FString Username;
    FString UserToGrant;

};

struct FEngineServiceAuthDeny
{
    FString Username;
    FString UserToDeny;

};

struct FEngineServicePong
{
    FString CurrentLevel;
    int32 EngineVersion;
    bool HasBegunPlay;
    FGuid InstanceId;
    FString InstanceType;
    FGuid sessionId;
    float WorldTimeSeconds;

};

struct FEngineServicePing
{
};

#endif
