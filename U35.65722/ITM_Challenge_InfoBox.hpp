#ifndef UE4SS_SDK_ITM_Challenge_InfoBox_HPP
#define UE4SS_SDK_ITM_Challenge_InfoBox_HPP

class UITM_Challenge_InfoBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HoverAnim;
    class UWidgetAnimation* ClickAnim;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UImage* BG_Solid;
    class UButton* BTN_Info;
    class UButton* button_arrow;
    class UGridPanel* Grid_Challenges;
    class UImage* Image_BG;
    class UOverlay* InfoOverlay;
    class UOverlay* Overlay_ChallengeIcon;
    class UOverlay* Overlay_Challenges;
    class USizeBox* SBOX_ButtonGFX;
    bool IsOpen;
    FITM_Challenge_InfoBox_COnChallengeHovered OnChallengeHovered;
    void OnChallengeHovered(TArray<class UObject*>& assetReferences, bool InHovered, class USeasonChallenge* challenge);

    void OnNewChallenge();
    void AddChallengeToGrid(FChallengeInfo ChallengeInfo, int32 Column, class UItm_SeasonChallenge_Small_C*& W_Challenge, FMargin K2Node_MakeStruct_Margin, FAddChallengeToGridK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UItm_SeasonChallenge_Small_C* CallFunc_Create_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue);
    void SetOpen(bool InIsOpen);
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void RefreshChallenges();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void OnChallengeHover(bool IsHovered, int32 Index);
    void Construct();
    void ExecuteUbergraph_ITM_Challenge_InfoBox(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, class UItm_SeasonChallenge_Small_C* CallFunc_AddChallengeToGrid_W_Challenge, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool K2Node_Event_IsDesignTime, class UITM_Season_ChallengeTimer_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin, FExecuteUbergraph_ITM_Challenge_InfoBoxK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetChildrenCount_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, TArray<FChallengeInfo>& CallFunc_GetActiveChallenges_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, FChallengeInfo CallFunc_Array_Get_Item, class UItm_SeasonChallenge_Small_C* CallFunc_AddChallengeToGrid_W_Challenge_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_IsHovered, int32 K2Node_CustomEvent_Index, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, class USeasonChallenge* CallFunc_GetAssetReferences_outChallenge, TArray<class UDataAsset*>& CallFunc_GetAssetReferences_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
    void OnChallengeHovered__DelegateSignature(TArray<class UObject*>& assetReferences, bool InHovered, class USeasonChallenge* challenge);
};

#endif
