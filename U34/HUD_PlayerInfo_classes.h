// WidgetBlueprintGeneratedClass HUD_PlayerInfo.HUD_PlayerInfo_C
// Size: 0x2a1 (Inherited: 0x230)
struct UHUD_PlayerInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UITM_SupplyBar_C* AmmoBar; // 0x238(0x08)
	struct UOverlay* ClassLine; // 0x240(0x08)
	struct UImage* GradientBGMiddle; // 0x248(0x08)
	struct UOverlay* HealthLine; // 0x250(0x08)
	struct UHUD_PlayerClass_Icon_C* HUD_PlayerClass_Icon_87; // 0x258(0x08)
	struct UHUD_PlayerPerks_C* HUD_PlayerPerks; // 0x260(0x08)
	struct UOverlay* NameLine; // 0x268(0x08)
	bool PreviewShowName&Icon; // 0x270(0x01)
	bool PreviewShowHealth&Shield; // 0x271(0x01)
	char UnknownData_272[0x6]; // 0x272(0x06)
	struct APlayerCharacter* Character; // 0x278(0x08)
	struct UPlayerHealthComponent* HealthComponent; // 0x280(0x08)
	bool WasDead; // 0x288(0x01)
	bool UsingItem; // 0x289(0x01)
	bool UsingLaserpointer; // 0x28a(0x01)
	char UnknownData_28B[0x5]; // 0x28b(0x05)
	struct UHUDVisibilityGroup* HG_ClassName; // 0x290(0x08)
	struct UHUDVisibilityGroup* HG_HealthShield; // 0x298(0x08)
	bool LookingAtSupplyPod; // 0x2a0(0x01)

	void SetElementVisibility(bool Name, Class & Icon, bool Health & Shield); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.SetElementVisibility
	void ShowDynamically(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowDynamically
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnCharacterStateChanged_Event
	void OnHealthChanged_Event(float Health); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnHealthChanged_Event
	void OnLaserPointerPressed_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerPressed_Event
	void OnLaserPointerReleased_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerReleased_Event
	void VisibilityModeChanged(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.VisibilityModeChanged
	void BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(struct UHUDVisibilityGroup* Group, bool IsVisible); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
	void BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature(struct UHUDVisibilityGroup* Group, bool IsVisible); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature
	void OnFirePressed_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFirePressed_Event
	void OnFireReleased_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFireReleased_Event
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnSupplyStatusChangedEvent
	void ShowAmmoCounter(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowAmmoCounter
	void OnBeginHoveringEvent(struct UUsableComponentBase* Component); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnBeginHoveringEvent
	void OnEndHoveringEvent_Event(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnEndHoveringEvent_Event
	void PreConstruct(bool IsDesignTime); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.PreConstruct
	void Construct(); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.Construct
	void ExecuteUbergraph_HUD_PlayerInfo(int32_t EntryPoint); // Function HUD_PlayerInfo.HUD_PlayerInfo_C.ExecuteUbergraph_HUD_PlayerInfo
};

