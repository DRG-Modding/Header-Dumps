#ifndef UE4SS_SDK_HUD_ObjectivesBox_HPP
#define UE4SS_SDK_HUD_ObjectivesBox_HPP

class UHUD_ObjectivesBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ShowObjectives;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UHorizontalBox* DeepDiveBox;
    class UBasic_Label_C* DeepDiveElite;
    class UBasic_Label_C* DeepDiveStage;
    class UBasic_HUD_BracketWindowBig_Single_C* DeepDiveWindow;
    class UHUD_DefaultLabel_C* NoObjectives;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UInvalidationBox* ValidationBox;
    class UVerticalBox* VerticalBox_GameEvent;
    class UVerticalBox* VerticalBox_Optional;
    class UVerticalBox* VerticalBox_Primary;
    class UVerticalBox* VerticalBox_Secondary;
    class APlayerCharacter* Character;
    bool LaserpointerEquipped;
    class UHUDVisibilityGroup* VisibilityGroup;

    void CreateObjectiveWidget(class UObjective* Objective, class UOptionalObjectiveWidget* OptionalWidget, class UObjectiveWidget* ObjectiveWidget, class UVerticalBox* Box, bool primary, bool Temp_bool_Variable, FCreateObjectiveWidgetK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FCreateObjectiveWidgetK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, TSubclassOf<class UObjectiveWidget> CallFunc_GetWidgetClassOrDefault_ReturnValue, FMargin K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, class UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, class UObjectiveWidget* CallFunc_AddChildToVerticalBoxEx_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TSubclassOf<class UOptionalObjectiveWidget> CallFunc_GetOptionalMissionWidget_ReturnValue, class UOptionalObjectiveWidget* CallFunc_Create_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, bool CallFunc_IsPrimary_ReturnValue, class UVerticalBox* K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UObjectiveWidget* CallFunc_Create_ReturnValue_1);
    void Construct();
    void OnObjectiveAdded(class UObjective* Objective);
    void OnLaserPointerPressed();
    void OnLaserPointerReleased();
    void ShowDynamically();
    void Setup Deep Dive Label();
    void OnGameEventCompletedEvent(FText GameEventName);
    void SetVisible(bool InVisible, bool animate);
    void AnimFinished();
    void OnObjectiveWidgetUpdated(class UObjectiveWidget* InObjectiveWidget);
    void OnOptionalWidgetUpdated(class UOptionalObjectiveWidget* InOptionalObjectiveWidget);
    void ExecuteUbergraph_HUD_ObjectivesBox(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable, FExecuteUbergraph_HUD_ObjectivesBoxK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FExecuteUbergraph_HUD_ObjectivesBoxK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_2, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_3, FExecuteUbergraph_HUD_ObjectivesBoxK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, float Temp_float_Variable_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UObjective* K2Node_CustomEvent_Objective, class AFSDGameState* K2Node_DynamicCast_AsFSDGame_State, bool K2Node_DynamicCast_bSuccess, const TArray<class UObjective*>& CallFunc_GetObjectives_ReturnValue, class UObjective* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasReplicated_ReturnValue, bool Temp_bool_Variable_2, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue_1, bool CallFunc_IsDeepDive_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue_2, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, bool CallFunc_IsEliteDeepDive_ReturnValue, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FText K2Node_CustomEvent_GameEventName, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FExecuteUbergraph_HUD_ObjectivesBoxK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class UHUD_ObjectiveBox_Item_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FExecuteUbergraph_HUD_ObjectivesBoxK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AHUD* CallFunc_GetHUD_ReturnValue, bool K2Node_CustomEvent_InVisible, bool K2Node_CustomEvent_animate, class AFSDHUD* K2Node_DynamicCast_AsFSDHUD, bool K2Node_DynamicCast_bSuccess_2, ESlateVisibility K2Node_Select_Default_1, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FExecuteUbergraph_HUD_ObjectivesBoxK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class UObjectiveWidget* K2Node_CustomEvent_InObjectiveWidget, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UOptionalObjectiveWidget* K2Node_CustomEvent_InOptionalObjectiveWidget, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_2, class UDeepDive* CallFunc_GetActiveDeepDive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
