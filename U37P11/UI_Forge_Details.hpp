#ifndef UE4SS_SDK_UI_Forge_Details_HPP
#define UE4SS_SDK_UI_Forge_Details_HPP

class UUI_Forge_Details_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimCount;
    class UWidgetAnimation* AnimOpenMatrix;
    class UBorder* CounterBorder;
    class UOverlay* CounterOverlay;
    class UBasic_Label_C* CountLabel;
    class UTextBlock* DescriptionSubTitle;
    class UTextBlock* DescriptionTitle;
    class UTextBlock* ForgeItemCategory;
    class UTextBlock* ForgeItemDesc;
    class UTextBlock* ForgeItemName;
    class UOverlay* ItemDescriptionOverlay;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_MatrixCore_C* ITM_MatrixCore;
    class UITM_Overclock_Details_C* ITM_Overclock_Details;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UBorder* LowerBarBorder;
    class UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon;
    class UBorder* UpperBarBorder;
    class UImage* UpperBarCorner;
    class UOverlay* WeaponIcon;
    FUI_Forge_Details_COnMatrixCoreOpened OnMatrixCoreOpened;
    void OnMatrixCoreOpened();
    bool ShowMatrixCore;
    int32 CountingTo;
    float CountProgress;

    void SequenceEvent__ENTRYPOINTUI_Forge_Details_0();
    void StartCounting();
    void SetCountProgress(float InValue);
    void OpenMatrixCore();
    void SetItemDescription(FText Title, FText Subtitle);
    void ShowSchematic(class USchematic* InSchematic);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void AnimOpenMatrixFinished();
    void Stop Counting();
    void ExecuteUbergraph_UI_Forge_Details(int32 EntryPoint);
    void OnMatrixCoreOpened__DelegateSignature();
};

#endif
