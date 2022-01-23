#ifndef UE4SS_SDK_HUD_Resources_Team_HPP
#define UE4SS_SDK_HUD_Resources_Team_HPP

class UHUD_Resources_Team_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Transition;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UVerticalBox* IconParentBottom;
    class UVerticalBox* IconParentTop;
    class UBorder* SplitterBar;
    class UTextBlock* TEXT_Empty;
    class UTextBlock* TEXT_Header;
    class APlayerCharacter* Character;
    class UResourcesComponent* ResourceComponent;
    bool DoIntroAnim;
    int32 WidgetHideLock;
    bool Pinging;

    void IsObjectiveResource(class UCappedResource* InResource, bool& IsObjective, class UCappedResource*& OutResource, TArray<class UObjective*> Objectives, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObjective* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsObjectiveResource_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, const TArray<class UObjective*>& CallFunc_GetObjectives_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Add Resource(class UCappedResource* Resource);
    void Show Widget();
    void Hide Widget();
    void Ping Widget();
    void OnTransitionFinished();
    void OnDepositingEnd_Event(class UResourceBank* ResourceBank);
    void OnDepositingBegin_Event(class UResourceBank* ResourceBank);
    void OnResourceChanged_Event(class UCappedResource* Resource, float Amount);
    void OnResourceAdded(class UCappedResource* Resource);
    void OnToggleOutline_Event(bool Visible);
    void ExecuteUbergraph_HUD_Resources_Team(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, ESlateVisibility Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasObjectivesReplicated_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UCappedResource* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCappedResource* K2Node_CustomEvent_resource_2, bool CallFunc_IsObjectiveResource_IsObjective, class UCappedResource* CallFunc_IsObjectiveResource_OutResource, bool Temp_bool_Variable, bool CallFunc_IsCraftingResource_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHUD_Resources_Team_Icon_C* CallFunc_Create_ReturnValue, FExecuteUbergraph_HUD_Resources_TeamK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, FExecuteUbergraph_HUD_Resources_TeamK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FExecuteUbergraph_HUD_Resources_TeamK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FExecuteUbergraph_HUD_Resources_TeamK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_HasAnyChildren_ReturnValue, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, FExecuteUbergraph_HUD_Resources_TeamK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_GetIsDepositing_ReturnValue, FExecuteUbergraph_HUD_Resources_TeamK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UResourceBank* K2Node_CustomEvent_ResourceBank_1, class UResourceBank* K2Node_CustomEvent_ResourceBank, bool Temp_bool_Variable_1, class UVerticalBox* K2Node_Select_Default_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UCappedResource* K2Node_CustomEvent_resource_1, float K2Node_CustomEvent_Amount, bool CallFunc_GetIsDepositing_ReturnValue_1, class UCappedResource* K2Node_CustomEvent_resource, bool K2Node_CustomEvent_Visible);
};

#endif
