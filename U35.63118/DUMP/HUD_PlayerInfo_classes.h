// WidgetBlueprintGeneratedClass HUD_PlayerInfo.HUD_PlayerInfo_C
// Size: 0x2a9 (Inherited: 0x230)
struct UHUD_PlayerInfo_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UITM_SupplyBar_C* AmmoBar; // 0x238(0x08)
	UOverlay* ClassLine; // 0x240(0x08)
	UImage* GradientBGMiddle; // 0x248(0x08)
	UOverlay* HealthLine; // 0x250(0x08)
	UHUD_PlayerClass_Icon_C* HUD_PlayerClass_Icon_87; // 0x258(0x08)
	UHUD_PlayerPerks_C* HUD_PlayerPerks; // 0x260(0x08)
	UOverlay* NameLine; // 0x268(0x08)
	UUI_CallingMolly_C* UI_CallingMolly; // 0x270(0x08)
	bool PreviewShowName&Icon; // 0x278(0x01)
	bool PreviewShowHealth&Shield; // 0x279(0x01)
	APlayerCharacter* Character; // 0x280(0x08)
	UPlayerHealthComponent* HealthComponent; // 0x288(0x08)
	bool WasDead; // 0x290(0x01)
	bool UsingItem; // 0x291(0x01)
	bool UsingLaserpointer; // 0x292(0x01)
	UHUDVisibilityGroup* HG_ClassName; // 0x298(0x08)
	UHUDVisibilityGroup* HG_HealthShield; // 0x2a0(0x08)
	bool LookingAtSupplyPod; // 0x2a8(0x01)

	void SetElementVisibility(bool Name, Class & Icon, bool Health & Shield);
	void ShowDynamically();
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState);
	void OnHealthChanged_Event(float Health);
	void OnLaserPointerPressed_Event();
	void OnLaserPointerReleased_Event();
	void VisibilityModeChanged();
	void BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(UHUDVisibilityGroup* Group, bool IsVisible);
	void BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature(UHUDVisibilityGroup* Group, bool IsVisible);
	void OnFirePressed_Event();
	void OnFireReleased_Event();
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
	void ShowAmmoCounter();
	void OnBeginHoveringEvent(UUsableComponentBase* Component);
	void OnEndHoveringEvent_Event();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_HUD_PlayerInfo(int32_t EntryPoint);
};

