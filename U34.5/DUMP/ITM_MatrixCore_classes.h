// WidgetBlueprintGeneratedClass ITM_MatrixCore.ITM_MatrixCore_C
// Size: 0x278 (Inherited: 0x230)
struct UITM_MatrixCore_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimRewardSchematic; // 0x238(0x08)
	UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion; // 0x240(0x08)
	UImage* BackgroundImage; // 0x248(0x08)
	UImage* Category_CanisterBG; // 0x250(0x08)
	UITM_Overclock_Icon_C* CoreIcon; // 0x258(0x08)
	USizeBox* RewardSizer; // 0x260(0x08)
	float IconSize; // 0x268(0x04)
	bool ShowToolTip; // 0x26c(0x01)
	USchematic* Schematic; // 0x270(0x08)

	UWidget* GetMatrixCoreToolTip();
	void FromReward(USchematic* InReward, enum class ESchematicType InRewardType);
	void FromDeepDiveStage(int32_t StageIndex);
	void SetIconSize(float IconSize);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ITM_MatrixCore(int32_t EntryPoint);
};

