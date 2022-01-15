#ifndef UE4SS_SDK_HUD_ObjectivesBox_HPP
#define UE4SS_SDK_HUD_ObjectivesBox_HPP

class UHUD_ObjectivesBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ShowObjectives;
    UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    UHorizontalBox* DeepDiveBox;
    UBasic_Label_C* DeepDiveElite;
    UBasic_Label_C* DeepDiveStage;
    UBasic_HUD_BracketWindowBig_Single_C* DeepDiveWindow;
    UHUD_DefaultLabel_C* NoObjectives;
    UUI_ImageTinted_C* UI_ImageTinted;
    UInvalidationBox* ValidationBox;
    UVerticalBox* VerticalBox_GameEvent;
    UVerticalBox* VerticalBox_Optional;
    UVerticalBox* VerticalBox_Primary;
    UVerticalBox* VerticalBox_Secondary;
    APlayerCharacter* Character;
    bool LaserpointerEquipped;
    UHUDVisibilityGroup* VisibilityGroup;

    void CreateObjectiveWidget(UObjective* Objective, UOptionalObjectiveWidget* OptionalWidget, UObjectiveWidget* ObjectiveWidget, UVerticalBox* Box, bool primary, bool Temp_bool_Variable, OptionalObjectiveWidgetDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ObjectiveWidgetDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, TSubclassOf<UObjectiveWidget> CallFunc_GetWidgetClassOrDefault_ReturnValue, FMargin K2Node_MakeStruct_Margin, UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, UObjectiveWidget* CallFunc_AddChildToVerticalBoxEx_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, TSubclassOf<UOptionalObjectiveWidget> CallFunc_GetOptionalMissionWidget_ReturnValue, UOptionalObjectiveWidget* CallFunc_Create_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, bool CallFunc_IsPrimary_ReturnValue, UVerticalBox* K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UObjectiveWidget* CallFunc_Create_ReturnValue_1);
    void Construct();
    void OnObjectiveAdded(UObjective* Objective);
    void OnLaserPointerPressed();
    void OnLaserPointerReleased();
    void ShowDynamically();
    void Setup Deep Dive Label();
    void OnGameEventCompletedEvent(FText GameEventName);
    void SetVisible(bool InVisible, bool animate);
    void AnimFinished();
    void OnObjectiveWidgetUpdated(UObjectiveWidget* InObjectiveWidget);
    void OnOptionalWidgetUpdated(UOptionalObjectiveWidget* InOptionalObjectiveWidget);
    void ExecuteUbergraph_HUD_ObjectivesBox(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable, GameEventCompletedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, SetObjectivesVisible__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, float Temp_float_Variable_1, UGameStateBase* CallFunc_GetGameState_ReturnValue, UObjective* K2Node_CustomEvent_Objective, UFSDGameState* K2Node_DynamicCast_AsFSDGame_State, bool K2Node_DynamicCast_bSuccess, const TArray<UObjective*>& CallFunc_GetObjectives_ReturnValue, UObjective* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasReplicated_ReturnValue, bool Temp_bool_Variable_2, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue_1, bool CallFunc_IsDeepDive_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue_2, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_IsEliteDeepDive_ReturnValue, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FText K2Node_CustomEvent_GameEventName, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, ObjectivesDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UHUD_ObjectiveBox_Item_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, AHUD* CallFunc_GetHUD_ReturnValue, bool K2Node_CustomEvent_InVisible, bool K2Node_CustomEvent_animate, UFSDHUD* K2Node_DynamicCast_AsFSDHUD, bool K2Node_DynamicCast_bSuccess_2, ESlateVisibility K2Node_Select_Default_1, uint8 K2Node_Select_Default_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UObjectiveWidget* K2Node_CustomEvent_InObjectiveWidget, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UOptionalObjectiveWidget* K2Node_CustomEvent_InOptionalObjectiveWidget, UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_2, UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
