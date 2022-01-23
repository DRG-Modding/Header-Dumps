#ifndef UE4SS_SDK_ITM_SeasonEditor_Level_HPP
#define UE4SS_SDK_ITM_SeasonEditor_Level_HPP

class UITM_SeasonEditor_Level_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_SingleSlot;
    class UButton* Button_SingleSlot_Special;
    class UTextBlock* TextBlock_Level;
    int32 Level;
    FITM_SeasonEditor_Level_CEmptyButtonClicked EmptyButtonClicked;
    void EmptyButtonClicked(class UButton* Button);

    void GetSpecialReward(class UReward*& Reward, class UITM_SeasonEditor_Reward_C*& RewardWidget, FString CallFunc_Conv_IntToString_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, class UITM_SeasonEditor_Reward_C* K2Node_DynamicCast_AsITM_Season_Editor_Reward, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue);
    void GetNormalReward(class UReward*& Reward, class UITM_SeasonEditor_Reward_C*& RewardWidget, FString CallFunc_Conv_IntToString_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, class UITM_SeasonEditor_Reward_C* K2Node_DynamicCast_AsITM_Season_Editor_Reward, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue);
    void SetWidgets(class UITM_SeasonEditor_Reward_C* Normal, class UITM_SeasonEditor_Reward_C* Special, int32 Level);
    void BndEvt__Button_SingleSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_SingleSlot_Special_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_SeasonEditor_Level(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, class UITM_SeasonEditor_Reward_C* K2Node_CustomEvent_Normal, class UITM_SeasonEditor_Reward_C* K2Node_CustomEvent_Special, int32 K2Node_CustomEvent_Level, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
    void EmptyButtonClicked__DelegateSignature(class UButton* Button);
};

#endif
