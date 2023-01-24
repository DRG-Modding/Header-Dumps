#ifndef UE4SS_SDK_ITM_MatrixCore_HPP
#define UE4SS_SDK_ITM_MatrixCore_HPP

class UITM_MatrixCore_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimRewardSchematic;
    class UAnimatedStaticOverlay_WithScanlines_LightVersion_C* AnimatedStaticOverlay_WithScanlines_LightVersion;
    class UImage* BackgroundImage;
    class UImage* Category_CanisterBG;
    class UITM_Overclock_Icon_C* CoreIcon;
    class USizeBox* RewardSizer;
    float IconSize;
    bool ShowToolTip;
    class USchematic* Schematic;

    class UWidget* GetMatrixCoreToolTip();
    void FromReward(class USchematic* InReward, ESchematicType InRewardType);
    void FromDeepDiveStage(int32 stageIndex);
    void SetIconSize(float IconSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MatrixCore(int32 EntryPoint);
};

#endif
