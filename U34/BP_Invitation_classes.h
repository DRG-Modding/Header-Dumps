// WidgetBlueprintGeneratedClass BP_Invitation.BP_Invitation_C
// Size: 0x348 (Inherited: 0x270)
struct UBP_Invitation_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* Hide; // 0x278(0x08)
	struct UWidgetAnimation* Show; // 0x280(0x08)
	struct UImage* AvatarImage; // 0x288(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x290(0x08)
	struct UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x298(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Ignore; // 0x2a0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x2a8(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x2b0(0x08)
	struct UHorizontalBox* buttons; // 0x2b8(0x08)
	struct UHorizontalBox* buttons2; // 0x2c0(0x08)
	struct UTextBlock* DATA_Content; // 0x2c8(0x08)
	struct UTextBlock* DATA_Header; // 0x2d0(0x08)
	struct UHorizontalBox* DataBox; // 0x2d8(0x08)
	struct FDiscordUserDataSDK UserData_New; // 0x2e0(0x40)
	bool Initialized; // 0x320(0x01)
	char UnknownData_321[0x7]; // 0x321(0x07)
	struct FDateTime TimeStarted; // 0x328(0x08)
	struct FMulticastInlineDelegate ImageReady; // 0x330(0x10)
	bool Initializing; // 0x340(0x01)
	char UnknownData_341[0x3]; // 0x341(0x03)
	float InviteTime; // 0x344(0x04)

	void ReplyInvite(int32_t Reply); // Function BP_Invitation.BP_Invitation_C.ReplyInvite
	void Initialize(struct FDiscordUserDataSDK User Data, float TimeElapsed); // Function BP_Invitation.BP_Invitation_C.Initialize
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function BP_Invitation.BP_Invitation_C.OnKeyUp
	void OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(struct UTexture2DDynamic* Texture); // Function BP_Invitation.BP_Invitation_C.OnFail_1E7B4EA94EB1E25E604B80A4114A24A4
	void OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(struct UTexture2DDynamic* Texture); // Function BP_Invitation.BP_Invitation_C.OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4
	void Construct(); // Function BP_Invitation.BP_Invitation_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BP_Invitation.BP_Invitation_C.Tick
	void OnReadyImage(struct FString URL); // Function BP_Invitation.BP_Invitation_C.OnReadyImage
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	void BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function BP_Invitation.BP_Invitation_C.BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	void HideUIDelayed(); // Function BP_Invitation.BP_Invitation_C.HideUIDelayed
	void ExecuteUbergraph_BP_Invitation(int32_t EntryPoint); // Function BP_Invitation.BP_Invitation_C.ExecuteUbergraph_BP_Invitation
	void ImageReady__DelegateSignature(struct FString URL); // Function BP_Invitation.BP_Invitation_C.ImageReady__DelegateSignature
};

