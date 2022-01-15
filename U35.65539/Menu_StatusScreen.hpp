#ifndef UE4SS_SDK_Menu_StatusScreen_HPP
#define UE4SS_SDK_Menu_StatusScreen_HPP

class UMenu_StatusScreen_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* LoadoutClicked;
    UBasic_IconWithOutline_C* Basic_IconWithOutline;
    UButton* Button_Loadout;
    UTextBlock* dataReadout;
    UTextBlock* dataReadout_isModded;
    UTextBlock* dataReadout_SeedGlobal;
    UTextBlock* dataReadout_SeedGlobal_Prefix;
    UTextBlock* dataReadout_SeedMission;
    UTextBlock* dataReadout_SeedMission_Prefix;
    UTextBlock* dataReadout_SeedPLS;
    UTextBlock* dataReadout_SeedPLS_Prefix;
    UHUD_TabPlayerList_InteractableV2_C* FriendsTab;
    UImage* Image_BottomSmoke;
    UImage* Image_GradientBottom;
    UImage* Image_Separator;
    UImage* Image_Separator_1;
    UImage* Image_Separator_2;
    UITM_EscMenu_BriefingV2_C* ITM_EscMenu_BriefingV2;
    UITM_PreventDuplicateCharacters_C* ITM_PreventDuplicateCharacters;
    UITM_PrivatePublic_C* ITM_PrivatePublic;
    UITM_WeaponAndPerkInfo_C* ITM_WeaponAndPerkInfo1;
    UHUD_TabPlayerListEntry_InteractableV2_C* LocalPlayer;
    UImage* PlayerCharacterImage;
    UTextBlock* TextBlock;
    UTextBlock* TextBlock_3;
    FMenu_StatusScreen_COpenMinersManual OpenMinersManual;
    void OpenMinersManual(UObject* IdentifyingObject, bool OpenSpecificPage, EMinersManualSinglePage Page);

    void Construct();
    void Update();
    void Close();
    void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_1_MissionTypeClicked__DelegateSignature();
    void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_2_MutatorClicked__DelegateSignature();
    void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_3_WarningClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ITM_EscMenu_BriefingV2_K2Node_ComponentBoundEvent_7_BiomeClicked__DelegateSignature();
    void RefreshShowroom();
    void ExecuteUbergraph_Menu_StatusScreen(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, EFSDTargetPlatform Temp_byte_Variable_3, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, ESlateVisibility Temp_byte_Variable_4, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInActiveSession_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_5, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue_1, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UCharacterShowroomController* CallFunc_DisplayCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, ESlateVisibility Temp_byte_Variable_6, FString CallFunc_GetProjectVersion_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool Temp_bool_Variable_11, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility K2Node_Select_Default, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_Select_Default_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_Select_Default_2, bool CallFunc_AreModsInstalled_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_AreModsInstalled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, ESlateVisibility K2Node_Select_Default_3, bool CallFunc_IsVisible_ReturnValue_1, bool Temp_bool_Variable_12, ESlateVisibility K2Node_Select_Default_4);
    void OpenMinersManual__DelegateSignature(UObject* IdentifyingObject, bool OpenSpecificPage, EMinersManualSinglePage Page);
}

#endif
