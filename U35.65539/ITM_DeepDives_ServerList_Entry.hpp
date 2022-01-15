#ifndef UE4SS_SDK_ITM_DeepDives_ServerList_Entry_HPP
#define UE4SS_SDK_ITM_DeepDives_ServerList_Entry_HPP

class UITM_DeepDives_ServerList_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UButton* Button_0;
    UUI_GradientMasked_Image_C* GradientBackground;
    UScaleBox* Modded_Box;
    UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons;
    USizeBox* SizeBox_Distance;
    USizeBox* SizeBox_Mission;
    USizeBox* SizeBox_Team;
    UTextBlock* TXT_Distance;
    UTextBlock* TXT_Modded;
    UTextBlock* TXT_Region;
    UTextBlock* TXT_ServerName;
    FBlueprintSessionResult Session;
    FITM_DeepDives_ServerList_Entry_CJoinServer JoinServer;
    void JoinServer(FBlueprintSessionResult Session);
    UBasic_ToolTip_C* MutatorToolTip;
    UBasic_ToolTip_C* WarningToolTip;
    UBiome_ToolTip_C* BiomeToolTip;
    UImage* Image_Warning_0;
    UMaterialInstanceDynamic* BiomeMaterial;

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsMouseEventAction_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsMouseEventAction_ReturnValue);
    void OpenProfile(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, FString CallFunc_FSDGetHostUserID_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue);
    void SetServername(UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_FSDGetServerNameSanitized_ReturnValue, bool CallFunc_GetUseProfanityFilter_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsUGCAllowed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, bool CallFunc_GetUseProfanityFilter_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, FString CallFunc_FSDGetServerName_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FString CallFunc_FilterProfanityText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_SelectString_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_2);
    void SetMissionNameWidth(float Width);
    UWidget* GetMissionToolTip(UGeneratedMission* mission, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, UMissionGenerationManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<FString>& CallFunc_FSDGetModsInstalled_ReturnValue, TArray<FString>& CallFunc_FSDGetModsInstalled_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable_3, UTOOLTIP_ServerEntry_Mods_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_4, FText CallFunc_GetText_ReturnValue, EFSDTargetPlatform Temp_byte_Variable, FText CallFunc_GetText_ReturnValue_1, bool K2Node_Select_Default, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, UShowProfile_ToolTip_C* CallFunc_Create_ReturnValue_1, const FText Temp_text_Variable, int32 CallFunc_FSDGetMissionSeed_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, UTOOLTIP_ServerEntry_Biome_C* CallFunc_Create_ReturnValue_2, UGeneratedMission* CallFunc_GetMissionFromSeeds_ReturnValue);
    void SetColumnWidths(TArray<float>& InWidths, int32 Index, USizeBox* Column, TArray<USizeBox*> Columns, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, USizeBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, float CallFunc_Array_Get_Item_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, USizeBox* CallFunc_Array_Get_Item_2, FSlateChildSize K2Node_MakeStruct_SlateChildSize_1, TArray<USizeBox*>& K2Node_MakeArray_Array);
    void ToggleMissionDetails(bool Visible, bool& OutVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetNoMission(bool CallFunc_ToggleMissionDetails_OutVisible);
    void SetSession(FBlueprintSessionResult Session, UGeneratedMission* mission, FText Temp_text_Variable, FText Temp_text_Variable_1, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, EServerDistance Temp_byte_Variable_3, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, bool Temp_bool_Variable_6, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, bool K2Node_Select_Default, bool CallFunc_FSDIsModdedServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_1, EServerDistance CallFunc_FSDGetDistance_ReturnValue, bool CallFunc_FSDHasGameStarted_ReturnValue, FText K2Node_Select_Default_2, bool CallFunc_FSDIsEliteDeepDive_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_ToggleMissionDetails_OutVisible, bool Temp_bool_Variable_7, UDeepDive* K2Node_Select_Default_3, FText K2Node_Select_Default_4, UTexture2D* CallFunc_GetBiomeIcon_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_FSDIsFullServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FString CallFunc_FSDGetRegion_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, TArray<UPlayerCharacterID*>& CallFunc_FSDGetPlayerClassIDs_ReturnValue, bool CallFunc_FSDIsClassLocked_ReturnValue, int32 CallFunc_FSDGetNumPlayers_ReturnValue);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_DeepDives_ServerList_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
    void JoinServer__DelegateSignature(FBlueprintSessionResult Session);
}

#endif
