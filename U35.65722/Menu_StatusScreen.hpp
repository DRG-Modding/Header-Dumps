#ifndef UE4SS_SDK_Menu_StatusScreen_HPP
#define UE4SS_SDK_Menu_StatusScreen_HPP

class UMenu_StatusScreen_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* LoadoutClicked;
    class UBasic_IconWithOutline_C* Basic_IconWithOutline;
    class UButton* Button_Loadout;
    class UTextBlock* dataReadout;
    class UTextBlock* dataReadout_isModded;
    class UTextBlock* dataReadout_SeedGlobal;
    class UTextBlock* dataReadout_SeedGlobal_Prefix;
    class UTextBlock* dataReadout_SeedMission;
    class UTextBlock* dataReadout_SeedMission_Prefix;
    class UTextBlock* dataReadout_SeedPLS;
    class UTextBlock* dataReadout_SeedPLS_Prefix;
    class UHUD_TabPlayerList_InteractableV2_C* FriendsTab;
    class UImage* Image_BottomSmoke;
    class UImage* Image_GradientBottom;
    class UImage* Image_Separator;
    class UImage* Image_Separator_1;
    class UImage* Image_Separator_2;
    class UITM_EscMenu_BriefingV2_C* ITM_EscMenu_BriefingV2;
    class UITM_PreventDuplicateCharacters_C* ITM_PreventDuplicateCharacters;
    class UITM_PrivatePublic_C* ITM_PrivatePublic;
    class UITM_WeaponAndPerkInfo_C* ITM_WeaponAndPerkInfo1;
    class UHUD_TabPlayerListEntry_InteractableV2_C* LocalPlayer;
    class UImage* PlayerCharacterImage;
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_3;
    FMenu_StatusScreen_COpenMinersManual OpenMinersManual;
    void OpenMinersManual(class UObject* IdentifyingObject, bool OpenSpecificPage, EMinersManualSinglePage Page);

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
    void ExecuteUbergraph_Menu_StatusScreen(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, EFSDTargetPlatform Temp_byte_Variable_3, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, ESlateVisibility Temp_byte_Variable_4, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInActiveSession_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_5, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue_1, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class UCharacterShowroomController* CallFunc_DisplayCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, ESlateVisibility Temp_byte_Variable_6, FString CallFunc_GetProjectVersion_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool Temp_bool_Variable_11, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility K2Node_Select_Default, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_Select_Default_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue_1, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_Select_Default_2, bool CallFunc_AreModsInstalled_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_AreModsInstalled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, ESlateVisibility K2Node_Select_Default_3, bool CallFunc_IsVisible_ReturnValue_1, bool Temp_bool_Variable_12, ESlateVisibility K2Node_Select_Default_4);
    void OpenMinersManual__DelegateSignature(class UObject* IdentifyingObject, bool OpenSpecificPage, EMinersManualSinglePage Page);
};

#endif
