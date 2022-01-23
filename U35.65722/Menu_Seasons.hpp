#ifndef UE4SS_SDK_Menu_Seasons_HPP
#define UE4SS_SDK_Menu_Seasons_HPP

class UMenu_Seasons_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowSeasonPage;
    class UWidgetAnimation* NotEnoughTokens;
    class UWidgetAnimation* NewSectionOpen;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UHeader_ButtonCutCorner_C* BTN_CheatCollectCellRack;
    class UHeader_ButtonCutCorner_C* BTN_ClearChallenges;
    class UHeader_ButtonCutCorner_C* BTN_EndFlow_Little;
    class UHeader_ButtonCutCorner_C* BTN_EndFlow_Medium;
    class UHeader_ButtonCutCorner_C* BTN_EndFlow_Much;
    class UHeader_ButtonCutCorner_C* BTN_NewChallenge;
    class UHeader_ButtonCutCorner_C* BTN_ResetRenew;
    class UHeader_ButtonCutCorner_C* BTN_ResetReroll;
    class UHeader_ButtonCutCorner_C* BTN_Season;
    class UHeader_ButtonCutCorner_C* BTN_ShowCheats;
    class UHeader_ButtonCutCorner_C* BTN_Story;
    class UHeader_ButtonCutCorner_C* BTN_TreeOfVanity;
    class UBasic_ButtonScalable2_C* CloseButton;
    class UVerticalBox* HBox_Cheats;
    class UImage* Icon_Token;
    class UImage* Image_BlackgroundDim;
    class UImage* Image_SeasonTitle;
    class UITM_SeasonMenu_BG_C* ITM_SeasonMenu_BG;
    class UUI_AdvancedLabel_C* OptionIconNext;
    class UUI_AdvancedLabel_C* OptionIconPrev;
    class UTextBlock* Text_NumberOfTokens;
    class UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    class UImage* UnlockedIcon;
    class UVerticalBox* VerticalBox_Cheats;
    class UWnd_SeasonBriefing_C* Wnd_SeasonBriefing;
    class UWND_SeasonOverview_C* WND_SeasonOverview;
    class UWND_TreeOfVanity_C* WND_TreeOfVanity;
    class UHeader_ButtonCutCorner_C* SelectedButton;
    class UMissionStat* CellStat;
    class UMissionStat* RackStat;
    class UWindowWidget* SelectedSection;
    TArray<class UWindowWidget*> Sections;
    TArray<class UHeader_ButtonCutCorner_C*> buttons;
    bool CanShowExclamation;

    void SelectSection(class UWindowWidget* InSection, class UHeader_ButtonCutCorner_C* InButton, bool ComeFromSeason, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue);
    void Start End Flow(int32 numberOfChallenges, bool hasEvent, int32 ExtrsXP, int32 NumbOfEvents, class USeasonEventData* Event, int32 XP_SUM, TArray<int32> EventPoints, class UTEST_SeasonMissionComplete_C* CallFunc_Create_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class USeasonEventData* Temp_object_Variable, bool Temp_bool_Variable, class USeasonEventData* K2Node_Select_Default);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventint32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWindowWidget* CallFunc_Array_Get_Item, class UHeader_ButtonCutCorner_C* CallFunc_Array_Get_Item_1, FEventReply CallFunc_Unhandled_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWindowWidget* CallFunc_Array_Get_Item_2, class UHeader_ButtonCutCorner_C* CallFunc_Array_Get_Item_3, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsKeyEventAction_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue_1);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsBackMenuMouse_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue);
    void Toggle Button On(class UHeader_ButtonCutCorner_C* Button, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void BndEvt__BTN_TreeOfVanity_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Season_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void OnXPChanged();
    void OnTokensChanged(int32 NumberOfTokens, int32 Change);
    void OnClickedWithoutTokens();
    void BndEvt__BTN_TestEndFlow_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void OnShown();
    void OnClosed();
    void BndEvt__BTN_ResetReroll_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_NewChallenge_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_ClearChallenges_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_ResetRenew_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_CheatCollectCellRack_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_TestEndFlow3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_TestEndFlow2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Story_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void Construct();
    void BndEvt__BTN_ShowCheats_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C* Button);
    void PreConstruct(bool IsDesignTime);
    void HideScripExclamation(bool InHide);
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
    void ExecuteUbergraph_Menu_Seasons(int32 EntryPoint, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_11, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_10, int32 K2Node_CustomEvent_NumberOfTokens, int32 K2Node_CustomEvent_Change, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, FExecuteUbergraph_Menu_SeasonsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_8, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_7, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_6, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_5, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_4, FExecuteUbergraph_Menu_SeasonsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsVisible_ReturnValue, TSubclassOf<class APawn> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class APlayerCharacter> K2Node_ClassDynamicCast_AsPlayer_Character, bool K2Node_ClassDynamicCast_bSuccess, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_3, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_2, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_1, TArray<class UHeader_ButtonCutCorner_C*>& K2Node_MakeArray_Array, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, int32 CallFunc_GetNumberOfTokens_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UHeader_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, ESlateVisibility CallFunc_GetVisibility_ReturnValue, FExecuteUbergraph_Menu_SeasonsK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, TArray<class UWindowWidget*>& K2Node_MakeArray_Array_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsPlayInEditor_ReturnValue, bool K2Node_CustomEvent_InHide, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_Not_PreBool_ReturnValue_3, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2);
};

#endif
