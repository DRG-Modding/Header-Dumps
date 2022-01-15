#ifndef UE4SS_SDK_ITM_ServerList_Entry_HPP
#define UE4SS_SDK_ITM_ServerList_Entry_HPP

class UITM_ServerList_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UImage* Biome_Icon;
    UButton* Button_0;
    UITM_MisSel_DotMarker_CaveDifficulty_C* DotMarker_Complexity;
    UITM_MisSel_DotMarker_MissionLength_C* DotMarker_Length;
    UImage* Image_Mutator;
    UImage* Image_Warning;
    UImage* IMG_Status;
    UITM_MisSel_DotMarker_WorkEnvironment_C* ITM_MisSel_DotMarker_WorkEnvironment;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    UOverlay* Overlay_4;
    UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons;
    USizeBox* SizeBox_Complexity;
    USizeBox* SizeBox_Difficulty;
    USizeBox* SizeBox_Distance;
    USizeBox* SizeBox_Length;
    USizeBox* SizeBox_Mission;
    USizeBox* SizeBox_Team;
    USizeBox* SizeBox_Time;
    UTextBlock* Text_Mission;
    UTextBlock* Text_Modded;
    UTextBlock* TXT_Distance;
    UTextBlock* TXT_Friends;
    UTextBlock* TXT_MissionTime;
    UTextBlock* TXT_Region;
    UTextBlock* TXT_ServerName;
    UVerticalBox* VerticalBox_Mutators;
    UVerticalBox* VerticalBox_Warnings;
    UHorizontalBox* WarningMutatorBox;
    FBlueprintSessionResult Session;
    FITM_ServerList_Entry_CJoinServer JoinServer;
    void JoinServer(FBlueprintSessionResult Session);
    UBasic_ToolTip_C* MutatorToolTip;
    UBasic_ToolTip_C* WarningToolTip;
    UBiome_ToolTip_C* BiomeToolTip;
    UImage* Image_Warning_0;
    UMaterialInstanceDynamic* BiomeMaterial;
    bool ShowComplexity;
    bool ShowDifficulty;
    bool ShowLength;
    bool ShowTime;
    bool ShowWarningsAndMutators;
    bool FriendsArePlaying;
    FITM_ServerList_Entry_COnHovered OnHovered;
    void OnHovered(UITM_ServerList_Entry_C* InEntry);
    FITM_ServerList_Entry_COnUnhovered OnUnhovered;
    void OnUnhovered(UITM_ServerList_Entry_C* InEntry);

    void GetServerID(FString& ID, FString CallFunc_FSDGetServerID_ReturnValue);
    void SetHovered(bool InHovered, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, uint8 K2Node_Select_Default, float K2Node_Select_Default_1);
    void OpenProfile(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, FString CallFunc_FSDGetHostUserID_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue);
    void SetServername(UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_FSDGetServerNameSanitized_ReturnValue, bool CallFunc_GetUseProfanityFilter_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsUGCAllowed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, bool CallFunc_GetUseProfanityFilter_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, FString CallFunc_FSDGetServerName_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FString CallFunc_FilterProfanityText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_SelectString_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_2);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsMouseEventAction_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void SetMissionNameWidth(float Width);
    void SetVisibleElements(bool InShowComplexity, bool InShowDifficulty, bool InShowLength, bool InShowTime, bool InShowWarningsAndMutators, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, bool CallFunc_SelectVisibility_IsVisible_3, bool CallFunc_SelectVisibility_VisibilityChanged_3, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_3, bool CallFunc_SelectVisibility_IsVisible_4, bool CallFunc_SelectVisibility_VisibilityChanged_4, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_4);
    UWidget* GetMissionToolTip(UGeneratedMission* mission, bool Temp_bool_Variable, UMissionGenerationManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, TArray<FString>& CallFunc_FSDGetModsInstalled_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UTOOLTIP_ServerEntry_Mods_C* CallFunc_Create_ReturnValue, TArray<FString>& CallFunc_FSDGetModsInstalled_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable_2, FText CallFunc_GetText_ReturnValue, EFSDTargetPlatform Temp_byte_Variable, FText CallFunc_GetText_ReturnValue_1, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool K2Node_Select_Default, UShowProfile_ToolTip_C* CallFunc_Create_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const FText Temp_text_Variable, int32 CallFunc_FSDGetMissionSeed_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, UTOOLTIP_ServerEntry_Biome_C* CallFunc_Create_ReturnValue_2, UGeneratedMission* CallFunc_GetMissionFromSeeds_ReturnValue);
    void SetColumnWidths(TArray<float>& InWidths, int32 Index, USizeBox* Column, TArray<USizeBox*> Columns, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, USizeBox* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, float CallFunc_Array_Get_Item_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, USizeBox* CallFunc_Array_Get_Item_2, FSlateChildSize K2Node_MakeStruct_SlateChildSize_1, int32 Temp_int_Loop_Counter_Variable, TArray<USizeBox*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
    void ToggleMissionDetails(bool Visible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetNoMission();
    void SetBiomeIcon(UBiome* Biome, UTexture2D* Icon, bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UTexture2D* CallFunc_GetBiomeIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UBiome_ToolTip_C* CallFunc_CreateBiomeToolTip_ToolTipWidget);
    void SetupWarningsMutators(UGeneratedMission* mission, bool Temp_bool_Variable, UITM_MutatorIcon_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UITM_MutatorIcon_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const FVector2D Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, UMissionWarning* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<UMissionMutator*>& K2Node_MakeArray_Array, TArray<UMissionMutator*>& K2Node_MakeArray_Array_1, TArray<UMissionMutator*>& K2Node_Select_Default, UMissionMutator* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const FVector2D Temp_struct_Variable_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
    void UpdateMissionTime(FTimespan TimeSinceStart, EFSDMissionStatus Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, int32 CallFunc_GetHours_ReturnValue, int32 CallFunc_GetMinutes_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_GetSeconds_ReturnValue, bool Temp_bool_Variable_5, FText CallFunc_Conv_IntToText_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue, FText CallFunc_Format_ReturnValue_1, FText K2Node_Select_Default, EFSDMissionStatus CallFunc_FSDMissionStatus_ReturnValue, bool K2Node_Select_Default_1, FDateTime CallFunc_UtcNow_ReturnValue, FDateTime CallFunc_FSDGetServerStartTime_startTime, bool CallFunc_FSDGetServerStartTime_ReturnValue, FTimespan CallFunc_Subtract_DateTimeDateTime_ReturnValue);
    void SetSession(FBlueprintSessionResult Session, UGeneratedMission* mission, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UMissionGenerationManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, UMissionGenerationManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, EServerDistance Temp_byte_Variable_2, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, bool Temp_bool_Variable_4, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool CallFunc_FSDIsModdedServer_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_5, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_1, FString CallFunc_FSDGetServerID_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, EServerDistance CallFunc_FSDGetDistance_ReturnValue, FString CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FText K2Node_Select_Default_2, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, FText Temp_text_Variable_4, EMissionStructure CallFunc_GetMissionStructure_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FText Temp_text_Variable_5, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_FSDGetMissionSeed_ReturnValue, bool Temp_bool_Variable_7, FText K2Node_Select_Default_3, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue_1, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, TArray<UGeneratedMission*>& CallFunc_GetMissions_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsCampaignRestrictionsMet_ReturnValue, UGeneratedMission* CallFunc_GetCampaingMission_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, ESlateVisibility K2Node_Select_Default_4, bool CallFunc_FSDIsFullServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_FSDGetRegion_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<UPlayerCharacterID*>& CallFunc_FSDGetPlayerClassIDs_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_FSDIsClassLocked_ReturnValue, FText CallFunc_Format_ReturnValue, int32 CallFunc_FSDGetNumPlayers_ReturnValue, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue_1, UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue_1, UGeneratedMission* CallFunc_GetMissionFromSeeds_ReturnValue);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_0();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_ServerList_Entry(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, EFSDTargetPlatform Temp_byte_Variable, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_IsVisible_ReturnValue, bool K2Node_Event_IsDesignTime, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void OnUnhovered__DelegateSignature(UITM_ServerList_Entry_C* InEntry);
    void OnHovered__DelegateSignature(UITM_ServerList_Entry_C* InEntry);
    void JoinServer__DelegateSignature(FBlueprintSessionResult Session);
}

#endif
