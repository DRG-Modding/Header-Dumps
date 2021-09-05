// Class DiscordSDK.DiscordSDKInterface
// Size: 0x60 (Inherited: 0x28)
struct UDiscordSDKInterface : UObject {
	FMulticastInlineDelegate OnJoinRequest; // 0x28(0x10)

	void RejectInvite(FString UserId);
	void IgnoreInvite(FString UserId);
	UDiscordSDKInterface* Get();
	void AcceptInvite(FString UserId);
};

