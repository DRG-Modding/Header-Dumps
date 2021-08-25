// BlueprintGeneratedClass ModBaseV2.ModBaseV2_C
// Size: 0x2b0 (Inherited: 0x220)
struct AModBaseV2_C : AActor {
	struct USceneComponent* DefaultSceneRoot; // 0x220(0x08)
	struct FString ModName; // 0x228(0x10)
	struct FString ModVersion; // 0x238(0x10)
	struct FString ModAuthor; // 0x248(0x10)
	struct FMulticastInlineDelegate OnStart; // 0x258(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x268(0x10)
	struct FMulticastInlineDelegate OnInitialise; // 0x278(0x10)
	struct UWidget* ModUI; // 0x288(0x08)
	struct FMulticastInlineDelegate OnUIOpened; // 0x290(0x10)
	struct FMulticastInlineDelegate OnUIClosed; // 0x2a0(0x10)

	void OnUIClosed__DelegateSignature(); // Function ModBaseV2.ModBaseV2_C.OnUIClosed__DelegateSignature
	void OnUIOpened__DelegateSignature(); // Function ModBaseV2.ModBaseV2_C.OnUIOpened__DelegateSignature
	void OnInitialise__DelegateSignature(struct APlayerController* LocalPlayer); // Function ModBaseV2.ModBaseV2_C.OnInitialise__DelegateSignature
	void OnStop__DelegateSignature(); // Function ModBaseV2.ModBaseV2_C.OnStop__DelegateSignature
	void OnStart__DelegateSignature(); // Function ModBaseV2.ModBaseV2_C.OnStart__DelegateSignature
};

