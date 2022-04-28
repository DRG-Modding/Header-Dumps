#ifndef UE4SS_SDK_MENU_MissionCheat_HPP
#define UE4SS_SDK_MENU_MissionCheat_HPP

class UMENU_MissionCheat_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* Anomaly;
    class UComboBoxString* Biome;
    class UButton* BTN_Close;
    class UButton* BTN_MissionFromMap;
    class UButton* BTN_StartMission;
    class UComboBoxString* Complexity;
    class UComboBoxString* Difficulty;
    class UImage* Image_101;
    class UImage* Image_166;
    class UComboBoxString* MissionType;
    class UComboBoxString* Secondary;
    class UEditableTextBox* TB_GlobalSeed;
    class UEditableTextBox* TB_MissionSeed;
    class UEditableTextBox* TB_PLSSeed;
    class UEditableTextBox* TB_Seed;
    class UTextBlock* TXT_MissionName;
    class UComboBoxString* Warning_A;
    class UComboBoxString* Warning_B;

    void SetMissionName(class UGeneratedMission* mission, bool CallFunc_IsValid_ReturnValue);
    void GetDifficulty(class UDifficultySetting*& Output, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, class UDifficultySetting* CallFunc_Array_Get_Item);
    void RefreshSecondaries(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMissionTemplate* CallFunc_GetSelectedMissionType_Template, int32 CallFunc_Array_Length_ReturnValue, TSubclassOf<class UObjective> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_GetClassDisplayName_ReturnValue);
    void GetSecondary(TSubclassOf<class UObjective>& Output, class UMissionTemplate* CallFunc_GetSelectedMissionType_Template, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TSubclassOf<class UObjective> CallFunc_Array_Get_Item);
    bool IsCustomMissionAllowed(ESteamBranch CallFunc_GetSteamBranch_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void Get Warning B(class UMissionWarning*& Output, int32 CallFunc_GetSelectedIndex_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UMissionWarning* CallFunc_Array_Get_Item);
    void Get Warning A(class UMissionWarning*& Output, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UMissionWarning* CallFunc_Array_Get_Item);
    void GetAnomaly(class UMissionMutator*& Output, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UMissionMutator* CallFunc_Array_Get_Item);
    void GetDuration(class UMissionDuration*& Output, class UMissionTemplate* CallFunc_GetSelectedMissionType_Template, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TSubclassOf<class UMissionDNA> CallFunc_Array_Get_Item);
    void GetComplexity(class UMissionComplexity*& Output, class UMissionTemplate* CallFunc_GetSelectedMissionType_Template, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TSubclassOf<class UMissionDNA> CallFunc_Array_Get_Item);
    void GetSelectedMissionType(class UMissionTemplate*& Template, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, TArray<FMissionTemplateItem>& CallFunc_GetAllPossibleMissions_ReturnValue);
    void GetSelectedBiome(class UBiome*& Biome, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue);
    void OnFailure_7138AEF44F9FC9F667DF87911EB7E3E2();
    void OnSuccess_7138AEF44F9FC9F667DF87911EB7E3E2();
    void Construct();
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BTN_StartMission_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void RefreshComplexities();
    void BndEvt__MissionType_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__BTN_MissionFromMap_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void SetGeneratedMission(class UGeneratedMission* mission, int32 PLS_Seed);
    void BndEvt__TB_GlobalSeed_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_MENU_MissionCheat(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UMissionGenerationManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasTooManyModsEnabled_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_4, FExecuteUbergraph_MENU_MissionCheatK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue_1, TArray<FMissionTemplateItem>& CallFunc_GetAllPossibleMissions_ReturnValue, FMissionTemplateItem CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, class UMissionTemplate* CallFunc_GetSelectedMissionType_Template, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UBiome* CallFunc_GetSelectedBiome_Biome, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, class UMissionComplexity* CallFunc_GetComplexity_Output, class UMissionDuration* CallFunc_GetDuration_Output, class UGameData* CallFunc_GetFSDGameData_ReturnValue_2, class UMissionMutator* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, FString CallFunc_Conv_TextToString_ReturnValue_2, class UMissionMutator* CallFunc_GetAnomaly_Output, class UMissionWarning* CallFunc_Get_Warning_A_Output, class UMissionWarning* CallFunc_Get_Warning_B_Output, TArray<class UMissionWarning*>& K2Node_MakeArray_Array, class UGameData* CallFunc_GetFSDGameData_ReturnValue_3, class UMissionWarning* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, FString CallFunc_Conv_TextToString_ReturnValue_3, class UGameData* CallFunc_GetFSDGameData_ReturnValue_4, class UMissionWarning* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, FString CallFunc_Conv_TextToString_ReturnValue_4, class UMissionTemplate* CallFunc_GetSelectedMissionType_Template_1, FString K2Node_ComponentBoundEvent_SelectedItem, TEnumAsByte<ESelectInfo::Type> K2Node_ComponentBoundEvent_SelectionType, TSubclassOf<class UMissionDNA> CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, FString CallFunc_Conv_TextToString_ReturnValue_5, FString CallFunc_Conv_TextToString_ReturnValue_6, bool CallFunc_IsCustomMissionAllowed_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, TSubclassOf<class UObjective> CallFunc_GetSecondary_Output, class UGeneratedMission* CallFunc_GenerateMission_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue_5, int32 Temp_int_Array_Index_Variable_6, FMissionBiomeItem CallFunc_Array_Get_Item_5, class UDifficultySetting* CallFunc_Array_Get_Item_6, const FText CallFunc_GetBiomeName_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_7, FString CallFunc_Conv_TextToString_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, class UDifficultySetting* CallFunc_SelectDifficulty_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_FSDUpdateSessionInfo_ReturnValue, class AFSDGameModeSpaceRig* CallFunc_GetFSDSRGameMode_ReturnValue, FExecuteUbergraph_MENU_MissionCheatK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, int32 CallFunc_GetMaxPublicConnections_ReturnValue, bool CallFunc_IsCustomMissionAllowed_ReturnValue_1, class UFSDCreateSessionCallbackProxy* CallFunc_FSDCreateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText CallFunc_GetText_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue_9, FText CallFunc_GetText_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue_10, class UGeneratedMission* K2Node_CustomEvent_Mission, int32 K2Node_CustomEvent_PLS_Seed, int32 CallFunc_Conv_StringToInt_ReturnValue_2, class UGeneratedMission* CallFunc_GetMissionFromSeeds_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, const FText K2Node_ComponentBoundEvent_Text, TEnumAsByte<ETextCommit::Type> K2Node_ComponentBoundEvent_CommitMethod, FText CallFunc_GetText_ReturnValue_3, FString CallFunc_Conv_TextToString_ReturnValue_11, int32 CallFunc_Conv_StringToInt_ReturnValue_3);
};

#endif