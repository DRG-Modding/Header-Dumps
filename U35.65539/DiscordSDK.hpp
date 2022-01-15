#ifndef UE4SS_SDK_DiscordSDK_HPP
#define UE4SS_SDK_DiscordSDK_HPP

class UDiscordSDKInterface : UObject
{
    FDiscordSDKInterfaceOnJoinRequest OnJoinRequest;
    void DiscordSDKJoinRequest(const FDiscordUserDataSDK& joinRequest);

    void RejectInvite(FString UserId);
    void IgnoreInvite(FString UserId);
    UDiscordSDKInterface* Get();
    void AcceptInvite(FString UserId);
}

class UDiscordSDKInterface_Win64 : UDiscordSDKInterface
{
}

struct FDiscordUserDataSDK
{
    FString UserId;
    FString Username;
    FString discriminator;
    FString avatar;
}

#endif
