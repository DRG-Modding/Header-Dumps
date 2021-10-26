// WidgetBlueprintGeneratedClass HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C
// Size: 0x2a0 (Inherited: 0x230)
struct UHUD_TeamDisplay_Bosco_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* StateIconAnim; // 0x238(0x08)
	UBorder* Border_1; // 0x240(0x08)
	UImage* BorderImage; // 0x248(0x08)
	UUI_MaskedImage_C* CharacterIcon; // 0x250(0x08)
	UImage* Gradient; // 0x258(0x08)
	UHUD_BoscoAbillityCounter_C* HUD_AbillityCharges; // 0x260(0x08)
	UTextBlock* PlayerName; // 0x268(0x08)
	UHorizontalBox* ReviveBox; // 0x270(0x08)
	UImage* StateIcon; // 0x278(0x08)
	ABosco* Bosco; // 0x280(0x08)
	UHUDVisibilityGroup* VisibilityGroup; // 0x288(0x08)
	bool LaserpointerEquipped; // 0x290(0x01)
	AActor* BoscoFollowTarget; // 0x298(0x08)

	void SetVisibilityIfVisibleMode(enum class ESlateVisibility InVisibility);
	void UpdateReviveCharges(int32_t CurrentCharges, int32_t MaxCharges);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnBoscoChanged(ABosco* Bosco);
	void OnStateChanged(enum class EDroneAIState aCurrentState);
	void Update State Icon(UTexture2D* Texture, FLinearColor InColorAndOpacity);
	void OnReviveused(int32_t ReviveCount);
	void UpdateHUDVisibility();
	void OnLaserPointerPressed();
	void OnLaserPointerReleased();
	void BndEvt__VisibilityGroup_K2Node_ComponentBoundEvent_0_ModeDelegate__DelegateSignature(UHUDVisibilityGroup* Group, enum class EHUDVisibilityMode Mode);
	void FollowTargetChanged(AActor* FollowTarget);
	void ExecuteUbergraph_HUD_TeamDisplay_Bosco(int32_t EntryPoint);
};

