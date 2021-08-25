// WidgetBlueprintGeneratedClass HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C
// Size: 0x2ea (Inherited: 0x278)
struct UHUD_CharacterTrackingIcon_C : UActorTrackingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UWidgetAnimation* AnimPlayerDown; // 0x280(0x08)
	struct UWidgetAnimation* AnimInView; // 0x288(0x08)
	struct UImage* Arrow; // 0x290(0x08)
	struct UBorder* BorderInfo; // 0x298(0x08)
	struct USizeBox* BoxSizer; // 0x2a0(0x08)
	struct UHUD_DefaultLabel_C* Distance; // 0x2a8(0x08)
	struct UImage* IconClass; // 0x2b0(0x08)
	struct UImage* IconDown; // 0x2b8(0x08)
	struct UTextBlock* PlayerName; // 0x2c0(0x08)
	struct UCanvasPanel* RootCanvas; // 0x2c8(0x08)
	float ArrowRotation; // 0x2d0(0x04)
	float ArrowRadius; // 0x2d4(0x04)
	float ArrowAngle; // 0x2d8(0x04)
	char UnknownData_2DC[0x4]; // 0x2dc(0x04)
	struct APlayerCharacter* targetCharacter; // 0x2e0(0x08)
	bool IconInView; // 0x2e8(0x01)
	bool PlayerDown; // 0x2e9(0x01)

	void PreConstruct(bool IsDesignTime); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.PreConstruct
	void UpdateArrow(bool inView, float Angle); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.UpdateArrow
	void OnShow(); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnShow
	void OnInViewChanged(bool inView, float Angle); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnInViewChanged
	void OnTargetSet(struct AActor* NewTarget); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnTargetSet
	void OnTargetDistanceChanged(float Distance); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnTargetDistanceChanged
	void OnUpdateName(struct FString NewName); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnUpdateName
	void OnCharacterChanged(struct APlayerCharacter* PlayerCharacter); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnCharacterChanged
	void OnCharacterStateChanged(enum class ECharacterState NewState); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.OnCharacterStateChanged
	void Construct(); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.Construct
	void UpdateClassIcon(); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.UpdateClassIcon
	void ExecuteUbergraph_HUD_CharacterTrackingIcon(int32_t EntryPoint); // Function HUD_CharacterTrackingIcon.HUD_CharacterTrackingIcon_C.ExecuteUbergraph_HUD_CharacterTrackingIcon
};

