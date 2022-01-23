#ifndef UE4SS_SDK_UI_Perks_Buy_HPP
#define UE4SS_SDK_UI_Perks_Buy_HPP

class UUI_Perks_Buy_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimBuy;
    class UWidgetAnimation* ButtonPulse;
    class UBasic_FlatButton_C* BTN_Buy;
    class UBasic_FlatButton_C* BTN_CantAfford;
    class UBasic_FlatButton_C* BTN_Locked;
    class UBasic_FlatButton_C* BTN_Unlocked;
    class UWidgetSwitcher* ButtonSwitcher;
    class UHorizontalBox* CostBox;
    class UTextBlock* CostText;
    class URichTextSizable* DescriptionRichText;
    class UImage* FlashImage;
    class UTextBlock* TitleText;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UUI_PerkIcon_C* UI_PerkIcon;
    class UPerkAsset* Perk;
    int32 Tier;
    FUI_Perks_Buy_COnPerkClaimed OnPerkClaimed;
    void OnPerkClaimed();
    int32 Rank;

    void CanBuyPerk(bool& Can Buy, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetRankCost_ReturnValue, int32 CallFunc_GetPerkPoints_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, EPerkTierState CallFunc_GetStateAtTier_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetPerk(class UPerkAsset* InPerk, int32 InTier, int32 Cost, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, EPerkUsageType CallFunc_GetUsageType_ReturnValue, bool Temp_bool_Variable_3, FLinearColor CallFunc_PerkColorFromType_OutColor, int32 CallFunc_GetRankAtTier_Rank, bool CallFunc_GetRankAtTier_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetPerkPoints_ReturnValue, bool CallFunc_CanBuyPerk_Can_Buy, bool CallFunc_LessEqual_IntInt_ReturnValue, FLinearColor K2Node_Select_Default, int32 CallFunc_GetRankCost_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, int32 CallFunc_GetRankCost_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue, EPerkTierState CallFunc_GetStateAtTier_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1, FText CallFunc_GetRankDescription_ReturnValue, bool Temp_bool_Variable_4, class UBasic_FlatButton_C* K2Node_Select_Default_2, class UBasic_FlatButton_C* K2Node_Select_Default_3, class UBasic_FlatButton_C* K2Node_Select_Default_4);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ButtonBuy_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
    void Construct();
    void OnPerkPointsChanged(int32 PerkPoints, int32 Change);
    void Buy Selected Perk();
    void ExecuteUbergraph_UI_Perks_Buy(int32 EntryPoint, FExecuteUbergraph_UI_Perks_BuyK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UBasic_FlatButton_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_BuyPerkAtTier_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 K2Node_CustomEvent_PerkPoints, int32 K2Node_CustomEvent_Change, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UAudioComponent* CallFunc_PlayPitched_ReturnValue, bool CallFunc_CanBuyPerk_Can_Buy);
    void OnPerkClaimed__DelegateSignature();
};

#endif
