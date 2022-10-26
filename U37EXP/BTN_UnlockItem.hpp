#ifndef UE4SS_SDK_BTN_UnlockItem_HPP
#define UE4SS_SDK_BTN_UnlockItem_HPP

class UBTN_UnlockItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBlurBackground_C* BlurBackground;
    class UTextBlock* DATA_Rank;
    class UImage* ICON_Padlock;
    class UImage* ICON_Rank;
    class UImage* Image_106;
    class UVerticalBox* RankLock;
    FText ButtonText;
    bool ShowInput;
    FLinearColor Tint_Base;
    float Tint_Hover;
    TEnumAsByte<ENUM_MenuColors::Type> TextColor;

    void SetData(TScriptInterface<class ICraftable> Item, TSubclassOf<class APlayerCharacter> Character);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_BTN_UnlockItem(int32 EntryPoint);
};

#endif
