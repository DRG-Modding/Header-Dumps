#ifndef UE4SS_SDK_ITM_Challenge_InfoBox_HPP
#define UE4SS_SDK_ITM_Challenge_InfoBox_HPP

class UITM_Challenge_InfoBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* HoverAnim;
    UWidgetAnimation* ClickAnim;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UImage* BG_Solid;
    UButton* BTN_Info;
    UButton* button_arrow;
    UGridPanel* Grid_Challenges;
    UImage* Image_BG;
    UOverlay* InfoOverlay;
    UOverlay* Overlay_ChallengeIcon;
    UOverlay* Overlay_Challenges;
    USizeBox* SBOX_ButtonGFX;
    bool IsOpen;
    FITM_Challenge_InfoBox_COnChallengeHovered OnChallengeHovered;
    void OnChallengeHovered(TArray<UObject*>& assetReferences, bool InHovered, USeasonChallenge* challenge);

    void OnNewChallenge();
    void AddChallengeToGrid(FChallengeInfo ChallengeInfo, int32 Column, UItm_SeasonChallenge_Small_C*& W_Challenge, FMargin K2Node_MakeStruct_Margin, HoverChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UItm_SeasonChallenge_Small_C* CallFunc_Create_ReturnValue, UGridSlot* CallFunc_AddChildToGrid_ReturnValue);
    void SetOpen(bool InIsOpen);
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void RefreshChallenges();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Arrow_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void OnChallengeHover(bool IsHovered, int32 Index);
    void Construct();
    void ExecuteUbergraph_ITM_Challenge_InfoBox(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, UItm_SeasonChallenge_Small_C* CallFunc_AddChallengeToGrid_W_Challenge, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool K2Node_Event_IsDesignTime, UITM_Season_ChallengeTimer_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin, ShouldGetNewChallenge__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetChildrenCount_ReturnValue, UGridSlot* CallFunc_AddChildToGrid_ReturnValue, USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, TArray<FChallengeInfo>& CallFunc_GetActiveChallenges_ReturnValue, uint8 Temp_byte_Variable, FChallengeInfo CallFunc_Array_Get_Item, UItm_SeasonChallenge_Small_C* CallFunc_AddChallengeToGrid_W_Challenge_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_CustomEvent_IsHovered, int32 K2Node_CustomEvent_Index, uint8 Temp_byte_Variable_1, USeasonChallenge* CallFunc_GetAssetReferences_outChallenge, TArray<UDataAsset*>& CallFunc_GetAssetReferences_ReturnValue, uint8 K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
    void OnChallengeHovered__DelegateSignature(TArray<UObject*>& assetReferences, bool InHovered, USeasonChallenge* challenge);
}

#endif
