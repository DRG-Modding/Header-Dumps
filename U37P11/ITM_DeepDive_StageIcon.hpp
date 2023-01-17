#ifndef UE4SS_SDK_ITM_DeepDive_StageIcon_HPP
#define UE4SS_SDK_ITM_DeepDive_StageIcon_HPP

class UITM_DeepDive_StageIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_75;
    class UTextBlock* TextBlock_87;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_C_0;
    class UUI_ImageTinted_C* UI_ImageTinted_C_4;
    bool Active;
    FText Text;
    bool ShowClaimStatusText;

    void SetClaimStatusActive(bool Index);
    void SetText(FText Text);
    void SetActive(bool Index);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDive_StageIcon(int32 EntryPoint);
};

#endif
