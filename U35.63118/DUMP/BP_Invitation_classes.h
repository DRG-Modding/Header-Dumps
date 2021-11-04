// WidgetBlueprintGeneratedClass BP_Invitation.BP_Invitation_C
// Size: 0x348 (Inherited: 0x270)
struct UBP_Invitation_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* Hide; // 0x278(0x08)
	UWidgetAnimation* Show; // 0x280(0x08)
	UImage* AvatarImage; // 0x288(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x290(0x08)
	UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal; // 0x298(0x08)
	UBasic_ButtonScalable2_C* BTN_Ignore; // 0x2a0(0x08)
	UBasic_ButtonScalable2_C* BTN_No; // 0x2a8(0x08)
	UBasic_ButtonScalable2_C* BTN_Yes; // 0x2b0(0x08)
	UHorizontalBox* buttons; // 0x2b8(0x08)
	UHorizontalBox* buttons2; // 0x2c0(0x08)
	UTextBlock* DATA_Content; // 0x2c8(0x08)
	UTextBlock* DATA_Header; // 0x2d0(0x08)
	UHorizontalBox* DataBox; // 0x2d8(0x08)
	FDiscordUserDataSDK UserData_New; // 0x2e0(0x40)
	bool Initialized; // 0x320(0x01)
	FDateTime TimeStarted; // 0x328(0x08)
	FMulticastInlineDelegate ImageReady; // 0x330(0x10)
	bool Initializing; // 0x340(0x01)
	float InviteTime; // 0x344(0x04)

	void ReplyInvite(int32_t Reply);
	void Initialize(FDiscordUserDataSDK User Data, float TimeElapsed);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(UTexture2DDynamic* Texture);
	void OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(UTexture2DDynamic* Texture);
	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void OnReadyImage(FString URL);
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void HideUIDelayed();
	void ExecuteUbergraph_BP_Invitation(int32_t EntryPoint);
	void ImageReady__DelegateSignature(FString URL);
};

