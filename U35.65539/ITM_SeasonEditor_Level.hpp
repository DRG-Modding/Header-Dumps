#ifndef UE4SS_SDK_ITM_SeasonEditor_Level_HPP
#define UE4SS_SDK_ITM_SeasonEditor_Level_HPP

class UITM_SeasonEditor_Level_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_SingleSlot;
    UButton* Button_SingleSlot_Special;
    UTextBlock* TextBlock_Level;
    int32 Level;
    FITM_SeasonEditor_Level_CEmptyButtonClicked EmptyButtonClicked;
    void EmptyButtonClicked(UButton* Button);

    void GetSpecialReward(UReward*& Reward, UITM_SeasonEditor_Reward_C*& RewardWidget, FString CallFunc_Conv_IntToString_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, UITM_SeasonEditor_Reward_C* K2Node_DynamicCast_AsITM_Season_Editor_Reward, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue);
    void GetNormalReward(UReward*& Reward, UITM_SeasonEditor_Reward_C*& RewardWidget, FString CallFunc_Conv_IntToString_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, UITM_SeasonEditor_Reward_C* K2Node_DynamicCast_AsITM_Season_Editor_Reward, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue);
    void SetWidgets(UITM_SeasonEditor_Reward_C* Normal, UITM_SeasonEditor_Reward_C* Special, int32 Level);
    void BndEvt__Button_SingleSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_SingleSlot_Special_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_SeasonEditor_Level(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, UITM_SeasonEditor_Reward_C* K2Node_CustomEvent_Normal, UITM_SeasonEditor_Reward_C* K2Node_CustomEvent_Special, int32 K2Node_CustomEvent_Level, UPanelSlot* CallFunc_AddChild_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
    void EmptyButtonClicked__DelegateSignature(UButton* Button);
}

#endif
