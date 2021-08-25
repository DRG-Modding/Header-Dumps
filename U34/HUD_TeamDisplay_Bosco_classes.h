// WidgetBlueprintGeneratedClass HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C
// Size: 0x2a0 (Inherited: 0x230)
struct UHUD_TeamDisplay_Bosco_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* StateIconAnim; // 0x238(0x08)
	struct UBorder* Border_1; // 0x240(0x08)
	struct UImage* BorderImage; // 0x248(0x08)
	struct UUI_MaskedImage_C* CharacterIcon; // 0x250(0x08)
	struct UImage* Gradient; // 0x258(0x08)
	struct UHUD_BoscoAbillityCounter_C* HUD_AbillityCharges; // 0x260(0x08)
	struct UTextBlock* PlayerName; // 0x268(0x08)
	struct UHorizontalBox* ReviveBox; // 0x270(0x08)
	struct UImage* StateIcon; // 0x278(0x08)
	struct ABosco* Bosco; // 0x280(0x08)
	struct UHUDVisibilityGroup* VisibilityGroup; // 0x288(0x08)
	bool LaserpointerEquipped; // 0x290(0x01)
	char UnknownData_291[0x7]; // 0x291(0x07)
	struct AActor* BoscoFollowTarget; // 0x298(0x08)

	void SetVisibilityIfVisibleMode(enum class ESlateVisibility InVisibility); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.SetVisibilityIfVisibleMode
	void UpdateReviveCharges(int32_t CurrentCharges, int32_t MaxCharges); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateReviveCharges
	void PreConstruct(bool IsDesignTime); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.PreConstruct
	void Construct(); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Construct
	void OnBoscoChanged(struct ABosco* Bosco); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnBoscoChanged
	void OnStateChanged(enum class EDroneAIState aCurrentState); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnStateChanged
	void Update State Icon(struct UTexture2D* Texture, struct FLinearColor InColorAndOpacity); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Update State Icon
	void OnReviveused(int32_t ReviveCount); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnReviveused
	void UpdateHUDVisibility(); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateHUDVisibility
	void OnLaserPointerPressed(); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerPressed
	void OnLaserPointerReleased(); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnLaserPointerReleased
	void BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature(struct UHUDVisibilityGroup* Group, enum class EHUDVisibilityMode Mode); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature
	void FollowTargetChanged(struct AActor* FollowTarget); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.FollowTargetChanged
	void ExecuteUbergraph_HUD_TeamDisplay_Bosco(int32_t EntryPoint); // Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.ExecuteUbergraph_HUD_TeamDisplay_Bosco
};

