#ifndef UE4SS_SDK_SCREEN_MissionComplete_DeepDive_HPP
#define UE4SS_SDK_SCREEN_MissionComplete_DeepDive_HPP

class USCREEN_MissionComplete_DeepDive_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonScalable2_C* BTN_Continue;
    class UTextBlock* Data_CodeName;
    class UFSDLabelWidget* DATA_MissionTime;
    class UTextBlock* Data_Region;
    class UHorizontalBox* DATA_Resources;
    class UITM_DeepDive_MisCompBG_C* ITM_DeepDive_MisCompBG;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UITM_DeepDiveStatus_Stage_C* ITM_DeepDiveStage_0;
    class UITM_DeepDiveStatus_Stage_C* ITM_DeepDiveStage_1;
    class UITM_DeepDiveStatus_Stage_C* ITM_DeepDiveStage_2;
    class UITM_DeepDiveStatus_Animator_C* ITM_DeepDiveStatus_Animator;
    class UITM_CharacterDeepDive_C* Player1;
    class UITM_CharacterDeepDive_C* Player2;
    class UITM_CharacterDeepDive_C* Player3;
    class UITM_CharacterDeepDive_C* Player4;
    class UTextBlock* TXT_Codename;
    class UTextBlock* TXT_Region;
    TArray<class UITM_CharacterDeepDive_C*> CharacterItems;
    TArray<class UITM_DeepDiveStatus_Stage_C*> Stages;
    FSCREEN_MissionComplete_DeepDive_COnContinue OnContinue;
    void OnContinue();
    bool CountDownBegun;
    bool ContinueClicked;
    bool AnimationsFinished;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventbool CallFunc_IsOkMenu_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    class UDeepDive* GetCurrentDeepDive(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, class UDeepDive* CallFunc_GetDeepDiveFromMission_ReturnValue);
    void AddResource(class UCappedResource* Resource, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsValidResource_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_Craft_ResourceBig_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    bool IsValidResource(class UCappedResource* Resourceclass UResourceData* Data, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void CreateResources(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TArray<class UCappedResource*>& CallFunc_GetAllResources_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCappedResource* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void BeginScreen();
    void PreConstruct(bool IsDesignTime);
    void UpdateMissionTime(int32 Value);
    void Construct();
    void BndEvt__BTN_Continue_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnUpdateCountDown();
    void Setup Count Down();
    void Click Continue();
    void Update Continue Button();
    void ExecuteUbergraph_SCREEN_MissionComplete_DeepDive(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FExecuteUbergraph_SCREEN_MissionComplete_DeepDiveK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, TArray<class UITM_CharacterDeepDive_C*>& K2Node_MakeArray_Array, FExecuteUbergraph_SCREEN_MissionComplete_DeepDiveK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, int32 CallFunc_GetMissionTime_ReturnValue, int32 K2Node_CustomEvent_Value, float CallFunc_Conv_IntToFloat_ReturnValue, FText CallFunc_GetTimeText_Text, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, class UITM_CharacterDeepDive_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class UITM_DeepDiveStatus_Stage_C*>& K2Node_MakeArray_Array_1, class UITM_DeepDiveStatus_Stage_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_4, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDeepDive* CallFunc_GetCurrentDeepDive_ReturnValue, class UDeepDive* CallFunc_GetCurrentDeepDive_ReturnValue_1, class UDeepDive* CallFunc_GetCurrentDeepDive_ReturnValue_2, class UDeepDive* CallFunc_GetCurrentDeepDive_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, FExecuteUbergraph_SCREEN_MissionComplete_DeepDiveK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_BooleanAND_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_6, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2);
    void OnContinue__DelegateSignature();
};

#endif
