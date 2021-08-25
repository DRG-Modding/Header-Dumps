// Class DiscordSDK.DiscordSDKInterface
// Size: 0x60 (Inherited: 0x28)
struct UDiscordSDKInterface : UObject {
	struct FMulticastInlineDelegate OnJoinRequest; // 0x28(0x10)
	char UnknownData_38[0x28]; // 0x38(0x28)

	void RejectInvite(struct FString userId); // Function DiscordSDK.DiscordSDKInterface.RejectInvite
	void IgnoreInvite(struct FString userId); // Function DiscordSDK.DiscordSDKInterface.IgnoreInvite
	struct UDiscordSDKInterface* Get(); // Function DiscordSDK.DiscordSDKInterface.Get
	void AcceptInvite(struct FString userId); // Function DiscordSDK.DiscordSDKInterface.AcceptInvite
};

