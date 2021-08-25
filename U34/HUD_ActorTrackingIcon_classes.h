// WidgetBlueprintGeneratedClass HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C
// Size: 0x2ac (Inherited: 0x278)
struct UHUD_ActorTrackingIcon_C : UActorTrackingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UImage* Arrow; // 0x280(0x08)
	struct UImage* DataImage; // 0x288(0x08)
	struct UHUD_DefaultLabel_C* Distance; // 0x290(0x08)
	struct UHUD_DefaultLabel_C* Name; // 0x298(0x08)
	float ArrowRotation; // 0x2a0(0x04)
	float ArrowRadius; // 0x2a4(0x04)
	float ArrowAngle; // 0x2a8(0x04)

	void SetInfo(struct FText InText, struct UTexture2D* Texture, struct FLinearColor InTint); // Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.SetInfo
	void OnTargetDistanceChanged(float Distance); // Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetDistanceChanged
	void OnTargetSet(struct AActor* NewTarget); // Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetSet
	void OnPlayerNameChanged(struct FString NewName); // Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnPlayerNameChanged
	void OnInViewChanged(bool inView, float Angle); // Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnInViewChanged
	void PreConstruct(bool IsDesignTime); // Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.PreConstruct
	void UpdateArrow(bool inView, float Angle); // Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.UpdateArrow
	void OnShow(); // Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnShow
	void ExecuteUbergraph_HUD_ActorTrackingIcon(int32_t EntryPoint); // Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.ExecuteUbergraph_HUD_ActorTrackingIcon
};

