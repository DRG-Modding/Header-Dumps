#ifndef UE4SS_SDK_ITM_ServerList_Entry_HPP
#define UE4SS_SDK_ITM_ServerList_Entry_HPP

class UITM_ServerList_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UImage* Biome_Icon;
    class UButton* Button_0;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* DotMarker_Complexity;
    class UITM_MisSel_DotMarker_MissionLength_C* DotMarker_Length;
    class UImage* Image_Mutator;
    class UImage* Image_Warning;
    class UImage* IMG_Status;
    class UITM_MisSel_DotMarker_WorkEnvironment_C* ITM_MisSel_DotMarker_WorkEnvironment;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class UOverlay* Overlay_4;
    class UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons;
    class USizeBox* SizeBox_Complexity;
    class USizeBox* SizeBox_Difficulty;
    class USizeBox* SizeBox_Distance;
    class USizeBox* SizeBox_Length;
    class USizeBox* SizeBox_Mission;
    class USizeBox* SizeBox_Team;
    class USizeBox* SizeBox_Time;
    class UTextBlock* Text_Mission;
    class UTextBlock* Text_Modded;
    class UTextBlock* TXT_Distance;
    class UTextBlock* TXT_Friends;
    class UTextBlock* TXT_MissionTime;
    class UTextBlock* TXT_Region;
    class UTextBlock* TXT_ServerName;
    class UVerticalBox* VerticalBox_Mutators;
    class UVerticalBox* VerticalBox_Warnings;
    class UHorizontalBox* WarningMutatorBox;
    FBlueprintSessionResult Session;
    FITM_ServerList_Entry_CJoinServer JoinServer;
    void JoinServer(FBlueprintSessionResult Session);
    class UBasic_ToolTip_C* MutatorToolTip;
    class UBasic_ToolTip_C* WarningToolTip;
    class UBiome_ToolTip_C* BiomeToolTip;
    class UImage* Image_Warning_0;
    class UMaterialInstanceDynamic* BiomeMaterial;
    bool ShowComplexity;
    bool ShowDifficulty;
    bool ShowLength;
    bool ShowTime;
    bool ShowWarningsAndMutators;
    bool FriendsArePlaying;
    FITM_ServerList_Entry_COnHovered OnHovered;
    void OnHovered(class UITM_ServerList_Entry_C* InEntry);
    FITM_ServerList_Entry_COnUnhovered OnUnhovered;
    void OnUnhovered(class UITM_ServerList_Entry_C* InEntry);

    void GetServerID(FString& ID, FString CallFunc_FSDGetServerID_ReturnValue);
    void SetHovered(bool InHovered, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, float K2Node_Select_Default_1);
    void OpenProfile(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FString CallFunc_FSDGetHostUserID_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue);
    void SetServername(class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, FString CallFunc_FSDGetServerNameSanitized_ReturnValue, bool CallFunc_GetUseProfanityFilter_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsUGCAllowed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, bool CallFunc_GetUseProfanityFilter_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, FString CallFunc_FSDGetServerName_ReturnValue_2, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FString CallFunc_FilterProfanityText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_SelectString_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_2);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsMouseEventAction_ReturnValue);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void SetMissionNameWidth(float Width);
    void SetVisibleElements(bool InShowComplexity, bool InShowDifficulty, bool InShowLength, bool InShowTime, bool InShowWarningsAndMutators, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, bool CallFunc_SelectVisibility_IsVisible_3, bool CallFunc_SelectVisibility_VisibilityChanged_3, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_3, bool CallFunc_SelectVisibility_IsVisible_4, bool CallFunc_SelectVisibility_VisibilityChanged_4, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_4);
    class UWidget* GetMissionToolTip(class UGeneratedMission* mission, bool Temp_bool_Variable, class UMissionGenerationManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, TArray<FString>& CallFunc_FSDGetModsInstalled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTOOLTIP_ServerEntry_Mods_C* CallFunc_Create_ReturnValue, TArray<FString>& CallFunc_FSDGetModsInstalled_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable_2, FText CallFunc_GetText_ReturnValue, EFSDTargetPlatform Temp_byte_Variable, FText CallFunc_GetText_ReturnValue_1, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool K2Node_Select_Default, class UShowProfile_ToolTip_C* CallFunc_Create_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const FText Temp_text_Variable, int32 CallFunc_FSDGetMissionSeed_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, class UTOOLTIP_ServerEntry_Biome_C* CallFunc_Create_ReturnValue_2, class UGeneratedMission* CallFunc_GetMissionFromSeeds_ReturnValue);
    void SetColumnWidths(TArray<float>& InWidths, int32 Index, class USizeBox* Column, TArray<class USizeBox*> Columns, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class USizeBox* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, float CallFunc_Array_Get_Item_1, FSlateChildSize K2Node_MakeStruct_SlateChildSize, class USizeBox* CallFunc_Array_Get_Item_2, FSlateChildSize K2Node_MakeStruct_SlateChildSize_1, int32 Temp_int_Loop_Counter_Variable, TArray<class USizeBox*>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
    void ToggleMissionDetails(bool Visible, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetNoMission();
    void SetBiomeIcon(class UBiome* Biome, class UTexture2D* Icon, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* CallFunc_GetBiomeIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UBiome_ToolTip_C* CallFunc_CreateBiomeToolTip_ToolTipWidget);
    void SetupWarningsMutators(class UGeneratedMission* mission, bool Temp_bool_Variable, class UITM_MutatorIcon_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UITM_MutatorIcon_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const FVector2D Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UMissionWarning* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UMissionMutator*>& K2Node_MakeArray_Array, TArray<class UMissionMutator*>& K2Node_MakeArray_Array_1, TArray<class UMissionMutator*>& K2Node_Select_Default, class UMissionMutator* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const FVector2D Temp_struct_Variable_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
    void UpdateMissionTime(FTimespan TimeSinceStart, EFSDMissionStatus Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, int32 CallFunc_GetHours_ReturnValue, int32 CallFunc_GetMinutes_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_GetSeconds_ReturnValue, bool Temp_bool_Variable_5, FText CallFunc_Conv_IntToText_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue, FText CallFunc_Format_ReturnValue_1, FText K2Node_Select_Default, EFSDMissionStatus CallFunc_FSDMissionStatus_ReturnValue, bool K2Node_Select_Default_1, FDateTime CallFunc_UtcNow_ReturnValue, FDateTime CallFunc_FSDGetServerStartTime_startTime, bool CallFunc_FSDGetServerStartTime_ReturnValue, FTimespan CallFunc_Subtract_DateTimeDateTime_ReturnValue);
    void SetSession(FBlueprintSessionResult Session, class UGeneratedMission* mission, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UMissionGenerationManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UMissionGenerationManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, EServerDistance Temp_byte_Variable_2, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, bool Temp_bool_Variable_4, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, FString CallFunc_FSDGetServerName_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool CallFunc_FSDIsModdedServer_ReturnValue, EFSDTargetPlatform Temp_byte_Variable_5, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default_1, FString CallFunc_FSDGetServerID_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, EServerDistance CallFunc_FSDGetDistance_ReturnValue, FString CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FText K2Node_Select_Default_2, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, FText Temp_text_Variable_4, EMissionStructure CallFunc_GetMissionStructure_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FText Temp_text_Variable_5, int32 CallFunc_GetPlayerRank_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_FSDGetMissionSeed_ReturnValue, bool Temp_bool_Variable_7, FText K2Node_Select_Default_3, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue_1, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, TArray<class UGeneratedMission*>& CallFunc_GetMissions_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsCampaignRestrictionsMet_ReturnValue, class UGeneratedMission* CallFunc_GetCampaingMission_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, ESlateVisibility K2Node_Select_Default_4, bool CallFunc_FSDIsFullServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_FSDGetRegion_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, FText CallFunc_TextToUpper_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<class UPlayerCharacterID*>& CallFunc_FSDGetPlayerClassIDs_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_FSDIsClassLocked_ReturnValue, FText CallFunc_Format_ReturnValue, int32 CallFunc_FSDGetNumPlayers_ReturnValue, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue_1, class UDifficultySetting* CallFunc_FSDGetDifficulty_ReturnValue_1, class UGeneratedMission* CallFunc_GetMissionFromSeeds_ReturnValue);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_0();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_ServerList_Entry(int32 EntryPoint, FExecuteUbergraph_ITM_ServerList_EntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, EFSDTargetPlatform Temp_byte_Variable, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_IsVisible_ReturnValue, bool K2Node_Event_IsDesignTime, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void OnUnhovered__DelegateSignature(class UITM_ServerList_Entry_C* InEntry);
    void OnHovered__DelegateSignature(class UITM_ServerList_Entry_C* InEntry);
    void JoinServer__DelegateSignature(FBlueprintSessionResult Session);
};

#endif
