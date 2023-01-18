#ifndef UE4SS_SDK_EngineMessages_HPP
#define UE4SS_SDK_EngineMessages_HPP

struct FEngineServiceAuthDeny
{
    FString Username;
    FString UserToDeny;

};

struct FEngineServiceAuthGrant
{
    FString Username;
    FString UserToGrant;

};

struct FEngineServiceExecuteCommand
{
    FString Command;
    FString Username;

};

struct FEngineServiceNotification
{
    FString Text;
    double TimeSeconds;

};

struct FEngineServicePing
{
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

struct FEngineServiceTerminate
{
    FString Username;

};

#endif
