#ifndef UE4SS_SDK_DiscordSDK_HPP
#define UE4SS_SDK_DiscordSDK_HPP

struct FDiscordUserDataSDK
{
    FString UserId;
    FString Username;
    FString discriminator;
    FString avatar;

};

class UDiscordSDKInterface : public UObject
{
    FDiscordSDKInterfaceOnJoinRequest OnJoinRequest;
    void DiscordSDKJoinRequest(const FDiscordUserDataSDK& joinRequest);

    void RejectInvite(FString UserId);
    void IgnoreInvite(FString UserId);
    class UDiscordSDKInterface* Get();
    void AcceptInvite(FString UserId);
};

class UDiscordSDKInterface_Win64 : public UDiscordSDKInterface
{
};

#endif
