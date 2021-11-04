// WidgetBlueprintGeneratedClass HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C
// Size: 0x2ea (Inherited: 0x278)
struct UHUD_CharacterTrackingIcon_C : UActorTrackingWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UWidgetAnimation* AnimPlayerDown; // 0x280(0x08)
	UWidgetAnimation* AnimInView; // 0x288(0x08)
	UImage* Arrow; // 0x290(0x08)
	UBorder* BorderInfo; // 0x298(0x08)
	USizeBox* BoxSizer; // 0x2a0(0x08)
	UHUD_DefaultLabel_C* Distance; // 0x2a8(0x08)
	UImage* IconClass; // 0x2b0(0x08)
	UImage* IconDown; // 0x2b8(0x08)
	UTextBlock* PlayerName; // 0x2c0(0x08)
	UCanvasPanel* RootCanvas; // 0x2c8(0x08)
	float ArrowRotation; // 0x2d0(0x04)
	float ArrowRadius; // 0x2d4(0x04)
	float ArrowAngle; // 0x2d8(0x04)
	APlayerCharacter* targetCharacter; // 0x2e0(0x08)
	bool IconInView; // 0x2e8(0x01)
	bool PlayerDown; // 0x2e9(0x01)

	void PreConstruct(bool IsDesignTime);
	void UpdateArrow(bool inView, float Angle);
	void OnShow();
	void OnInViewChanged(bool inView, float Angle);
	void OnTargetSet(AActor* NewTarget);
	void OnTargetDistanceChanged(float Distance);
	void OnUpdateName(FString NewName);
	void OnCharacterChanged(APlayerCharacter* PlayerCharacter);
	void OnCharacterStateChanged(enum class ECharacterState NewState);
	void Construct();
	void UpdateClassIcon();
	void ExecuteUbergraph_HUD_CharacterTrackingIcon(int32_t EntryPoint);
};

