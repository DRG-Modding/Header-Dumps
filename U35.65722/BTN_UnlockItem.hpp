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
    void ExecuteUbergraph_BTN_UnlockItem(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, int32 CallFunc_GetPlayerRank_ReturnValue, TScriptInterface<class ICraftable> K2Node_CustomEvent_Item, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_character, bool K2Node_Event_IsDesignTime, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, int32 CallFunc_GetRequiredPlayerRank_ReturnValue, bool CallFunc_IsOwned_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UVanityItem* K2Node_DynamicCast_AsVanity_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEquipped_ReturnValue, bool CallFunc_CanCraft_ReturnValue);
};

#endif
