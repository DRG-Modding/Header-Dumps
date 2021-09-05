// WidgetBlueprintGeneratedClass HUD_EnemyTargeting_Affliction.HUD_EnemyTargeting_Affliction_C
// Size: 0x270 (Inherited: 0x230)
struct UHUD_EnemyTargeting_Affliction_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeIn; // 0x238(0x08)
	UUI_MaskedImage_C* AfflictionIcon; // 0x240(0x08)
	UImage* BorderInner; // 0x248(0x08)
	UImage* BorderOuter; // 0x250(0x08)
	USizeBox* ImgSize; // 0x258(0x08)
	float Size; // 0x260(0x04)
	bool Active; // 0x264(0x01)
	UPawnAffliction* affliction; // 0x268(0x08)

	void UpdateTarget(UPawnAfflictionComponent* InPawnAfflictions);
	void SetActive(bool Inactive);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnFadeInFinished();
	void ExecuteUbergraph_HUD_EnemyTargeting_Affliction(int32_t EntryPoint);
};

