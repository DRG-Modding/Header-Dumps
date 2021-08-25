// WidgetBlueprintGeneratedClass HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C
// Size: 0x2f9 (Inherited: 0x230)
struct UHUD_TeamDisplay_SmallItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* RevivedAnimation; // 0x238(0x08)
	struct UWidgetAnimation* DamageAnimation; // 0x240(0x08)
	struct UWidgetAnimation* IntroAnimation; // 0x248(0x08)
	struct UWidgetAnimation* ParalyzedAnimation; // 0x250(0x08)
	struct UWidgetAnimation* DownAnimation; // 0x258(0x08)
	struct UITM_SupplyBar_C* AmmoBar; // 0x260(0x08)
	struct USizeBox* AmmoSizeBox; // 0x268(0x08)
	struct UImage* DownIcon; // 0x270(0x08)
	struct UImage* DownTarget; // 0x278(0x08)
	struct UProgressBar* HealthBar; // 0x280(0x08)
	struct USizeBox* HealthBarHolder; // 0x288(0x08)
	struct UBorder* HealthBorder; // 0x290(0x08)
	struct UImage* ICON_Mic; // 0x298(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x2a0(0x08)
	struct UTextBlock* PlayerName; // 0x2a8(0x08)
	struct UCircularThrobber* PlayerOnHisWayIndicator; // 0x2b0(0x08)
	struct AFSDPlayerState* PlayerState; // 0x2b8(0x08)
	struct UPlayerHealthComponent* HealthComponent; // 0x2c0(0x08)
	struct APlayerCharacter* PlayerCharacter; // 0x2c8(0x08)
	bool IsDown; // 0x2d0(0x01)
	bool IsParalyzed; // 0x2d1(0x01)
	bool AnimateIntro; // 0x2d2(0x01)
	bool LaserpointerEquipped; // 0x2d3(0x01)
	char UnknownData_2D4[0x4]; // 0x2d4(0x04)
	struct APlayerCharacter* LocalCharacter; // 0x2d8(0x08)
	struct AFSDPlayerState* LocalPlayerState; // 0x2e0(0x08)
	bool LookingAtSupplyPod; // 0x2e8(0x01)
	char UnknownData_2E9[0x7]; // 0x2e9(0x07)
	struct UHUDVisibilityGroup* VisibilityGroup; // 0x2f0(0x08)
	bool DownFollowingPlayer; // 0x2f8(0x01)

	void ShowDynamicHUD(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ShowDynamicHUD
	void OnVisibilityModeChanged(struct UHUDVisibilityGroup* Group, enum class EHUDVisibilityMode Mode); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnVisibilityModeChanged
	void OnPlayerNameChanged(struct FString NewName); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerNameChanged
	void OnPlayerLeave_Event(struct AFSDPlayerState* PlayerState); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerLeave_Event
	void OnPlayerCharacterSpawned(struct APlayerCharacter* PlayerCharacter); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerCharacterSpawned
	void StopAnim(struct UWidgetAnimation* Anim); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.StopAnim
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDeath
	void OnDamageTaken_Event(float amount); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDamageTaken_Event
	void OnHealthChanged(float Health); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnHealthChanged
	void OnCharacterStateChanged(enum class ECharacterState NewState); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged
	void PlayAnim(struct UWidgetAnimation* Anim); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PlayAnim
	void OnTalkingChanged(bool IsTalking); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnTalkingChanged
	void OnOwningCharacterSpawned(struct APlayerCharacter* PlayerCharacter); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnOwningCharacterSpawned
	void Construct(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Construct
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged_Event
	void OnDownCameraTargetChanged(struct APlayerCharacter* Target); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDownCameraTargetChanged
	void OnLaserPointerReleased_Event(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerReleased_Event
	void OnLaserPointerPressed_Event(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnLaserPointerPressed_Event
	void Show Ammo Bar(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Show Ammo Bar
	void OnEndHoveringEvent_Event(); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnEndHoveringEvent_Event
	void OnBeginHoveringEvent(struct UUsableComponentBase* Component); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnBeginHoveringEvent
	void PreConstruct(bool IsDesignTime); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PreConstruct
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnSupplyStatusChangedEvent
	void ExecuteUbergraph_HUD_TeamDisplay_SmallItem(int32_t EntryPoint); // Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ExecuteUbergraph_HUD_TeamDisplay_SmallItem
};

