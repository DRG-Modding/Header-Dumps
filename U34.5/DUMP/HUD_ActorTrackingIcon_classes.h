// WidgetBlueprintGeneratedClass HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C
// Size: 0x2ac (Inherited: 0x278)
struct UHUD_ActorTrackingIcon_C : UActorTrackingWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UImage* Arrow; // 0x280(0x08)
	UImage* DataImage; // 0x288(0x08)
	UHUD_DefaultLabel_C* Distance; // 0x290(0x08)
	UHUD_DefaultLabel_C* Name; // 0x298(0x08)
	float ArrowRotation; // 0x2a0(0x04)
	float ArrowRadius; // 0x2a4(0x04)
	float ArrowAngle; // 0x2a8(0x04)

	void SetInfo(FText InText, UTexture2D* Texture, FLinearColor InTint);
	void OnTargetDistanceChanged(float Distance);
	void OnTargetSet(AActor* NewTarget);
	void OnPlayerNameChanged(FString NewName);
	void OnInViewChanged(bool inView, float Angle);
	void PreConstruct(bool IsDesignTime);
	void UpdateArrow(bool inView, float Angle);
	void OnShow();
	void ExecuteUbergraph_HUD_ActorTrackingIcon(int32_t EntryPoint);
};

