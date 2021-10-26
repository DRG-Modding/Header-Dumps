// WidgetBlueprintGeneratedClass HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C
// Size: 0x301 (Inherited: 0x230)
struct UHUD_TeamDisplay_SmallItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* RevivedAnimation; // 0x238(0x08)
	UWidgetAnimation* DamageAnimation; // 0x240(0x08)
	UWidgetAnimation* IntroAnimation; // 0x248(0x08)
	UWidgetAnimation* ParalyzedAnimation; // 0x250(0x08)
	UWidgetAnimation* DownAnimation; // 0x258(0x08)
	UITM_SupplyBar_C* AmmoBar; // 0x260(0x08)
	USizeBox* AmmoSizeBox; // 0x268(0x08)
	UImage* DownIcon; // 0x270(0x08)
	UImage* DownTarget; // 0x278(0x08)
	UProgressBar* HealthBar; // 0x280(0x08)
	USizeBox* HealthBarHolder; // 0x288(0x08)
	UBorder* HealthBorder; // 0x290(0x08)
	UImage* ICON_Mic; // 0x298(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x2a0(0x08)
	UTextBlock* PlayerName; // 0x2a8(0x08)
	UCircularThrobber* PlayerOnHisWayIndicator; // 0x2b0(0x08)
	UUI_CallingMolly_C* UI_CallingMolly; // 0x2b8(0x08)
	AFSDPlayerState* PlayerState; // 0x2c0(0x08)
	UPlayerHealthComponent* HealthComponent; // 0x2c8(0x08)
	APlayerCharacter* PlayerCharacter; // 0x2d0(0x08)
	bool IsDown; // 0x2d8(0x01)
	bool IsParalyzed; // 0x2d9(0x01)
	bool AnimateIntro; // 0x2da(0x01)
	bool LaserpointerEquipped; // 0x2db(0x01)
	APlayerCharacter* LocalCharacter; // 0x2e0(0x08)
	AFSDPlayerState* LocalPlayerState; // 0x2e8(0x08)
	bool LookingAtSupplyPod; // 0x2f0(0x01)
	UHUDVisibilityGroup* VisibilityGroup; // 0x2f8(0x08)
	bool DownFollowingPlayer; // 0x300(0x01)

	void ShowDynamicHUD();
	void OnVisibilityModeChanged(UHUDVisibilityGroup* Group, enum class EHUDVisibilityMode Mode);
	void OnPlayerNameChanged(FString NewName);
	void OnPlayerLeave_Event(AFSDPlayerState* PlayerState);
	void OnPlayerCharacterSpawned(APlayerCharacter* PlayerCharacter);
	void StopAnim(UWidgetAnimation* Anim);
	void OnDeath(UHealthComponentBase* HealthComponent);
	void OnDamageTaken_Event(float Amount);
	void OnHealthChanged(float Health);
	void OnCharacterStateChanged(enum class ECharacterState NewState);
	void PlayAnim(UWidgetAnimation* Anim);
	void OnTalkingChanged(bool IsTalking);
	void OnOwningCharacterSpawned(APlayerCharacter* PlayerCharacter);
	void Construct();
	void OnCharacterStateChanged_Event(enum class ECharacterState NewState);
	void OnDownCameraTargetChanged(APlayerCharacter* Target);
	void OnLaserPointerReleased_Event();
	void OnLaserPointerPressed_Event();
	void Show Ammo Bar();
	void OnEndHoveringEvent_Event();
	void OnBeginHoveringEvent(UUsableComponentBase* Component);
	void PreConstruct(bool IsDesignTime);
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
	void ExecuteUbergraph_HUD_TeamDisplay_SmallItem(int32_t EntryPoint);
};

