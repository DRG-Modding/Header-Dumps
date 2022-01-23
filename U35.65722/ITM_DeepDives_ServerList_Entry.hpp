#ifndef UE4SS_SDK_ITM_DeepDives_ServerList_Entry_HPP
#define UE4SS_SDK_ITM_DeepDives_ServerList_Entry_HPP

class UITM_DeepDives_ServerList_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UButton* Button_0;
    class UUI_GradientMasked_Image_C* GradientBackground;
    class UScaleBox* Modded_Box;
    class UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons;
    class USizeBox* SizeBox_Distance;
    class USizeBox* SizeBox_Mission;
    class USizeBox* SizeBox_Team;
    class UTextBlock* TXT_Distance;
    class UTextBlock* TXT_Modded;
    class UTextBlock* TXT_Region;
    class UTextBlock* TXT_ServerName;
    FBlueprintSessionResult Session;
    FITM_DeepDives_ServerList_Entry_CJoinServer JoinServer;
    void JoinServer(FBlueprintSessionResult Session);
    class UBasic_ToolTip_C* MutatorToolTip;
    class UBasic_ToolTip_C* WarningToolTip;
    class UBiome_ToolTip_C* BiomeToolTip;
    class UImage* Image_Warning_0;
    class UMaterialInstanceDynamic* BiomeMaterial;

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsMouseEventAction_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsMouseEventAction_ReturnValue);
    void OpenProfile(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FString CallFunc_FSDGetHostUserID_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue);
    void SetServername(class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_FSDGetServerNameSanitized_ReturnValue, bool CallFunc_GetUseProfanityFilter_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsUGCAllowed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, bool CallFunc_GetUseProfanityFilter_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, FString CallFunc_FSDGetServerName_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FString CallFunc_FilterProfanityText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_SelectString_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_2);
    void SetMissionNameWidth(float Width);
    class UWidget* GetMissionToolTip(class UGeneratedMission* mission, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UMissionGenerationManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<FString>& CallFunc_FSDGetModsInstalled_ReturnValue, TArray<FString>& CallFunc_FSDGetModsInstalled_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable_3, class UTOOLTIP_ServerEntry_Mods_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable_4, FText CallFunc_GetText_ReturnValue, EFSDTargetPlatform Temp_byte_Variable, FText CallFunc_GetText_ReturnValue_1, bool K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UShowProfile_ToolTip_C* CallFunc_Create_ReturnValue_1, const FText Temp_text_Variable, int32 CallFunc_FSDGetMissionSeed_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, class UTOOLTIP_ServerEntry_Biome_C* CallFunc_Create_ReturnValue_2, class UGeneratedMission* CallFunc_GetMissionFromSeeds_ReturnValue);
    void SetColumnWidths(TArray<float>& InWidths, int32 Index, class USizeBox* Column, TArray<class USizeBox*> Columns, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class USizeBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, float CallFunc_Array_Get_Item_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, class USizeBox* CallFunc_Array_Get_Item_2, FSlateChildSize K2Node_MakeStruct_SlateChildSize_1, TArray<class USizeBox*>& K2Node_MakeArray_Array);
    void ToggleMissionDetails(bool Visible, bool& OutVisible, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetNoMission(bool CallFunc_ToggleMissionDetails_OutVisible);
    void SetSession(FBlueprintSessionResult Session, class UGeneratedMission* mission, FText Temp_text_Variable, FText Temp_text_Variable_1, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, EServerDistance Temp_byte_Variable_3, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, bool Temp_bool_Variable_6, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, bool K2Node_Select_Default, bool CallFunc_FSDIsModdedServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_1, EServerDistance CallFunc_FSDGetDistance_ReturnValue, bool CallFunc_FSDHasGameStarted_ReturnValue, FText K2Node_Select_Default_2, bool CallFunc_FSDIsEliteDeepDive_ReturnValue, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_ToggleMissionDetails_OutVisible, bool Temp_bool_Variable_7, class UDeepDive* K2Node_Select_Default_3, FText K2Node_Select_Default_4, class UTexture2D* CallFunc_GetBiomeIcon_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_FSDIsFullServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FString CallFunc_FSDGetRegion_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, TArray<class UPlayerCharacterID*>& CallFunc_FSDGetPlayerClassIDs_ReturnValue, bool CallFunc_FSDIsClassLocked_ReturnValue, int32 CallFunc_FSDGetNumPlayers_ReturnValue);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_DeepDives_ServerList_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
    void JoinServer__DelegateSignature(FBlueprintSessionResult Session);
};

#endif
